#ifndef GAME_HPP
#define GAME_HPP

#include <utility> 
#include <iostream>
#include <cmath>

#include "Interactable.hpp"
#include "Scientist.hpp"
#include "Helper.hpp"  
#include "Experiment.hpp"
#include "vector"

enum GameState {
    WIN,
    LOSE,
    PLAYING
};

class Game {
private:
    int width;
    int height;
    std::vector<std::pair<int, int>> experimentCoordinates;
    std::pair<int, int> scientistPosition;
    std::pair<int, int> goalPosition;
    GameState state;

public:
    Game(int w, int h, std::vector<std::pair<int, int>> experiments) 
        : width(w), height(h), experimentCoordinates(experiments), scientistPosition(0, 0), goalPosition(w - 1, h - 1), state(PLAYING) {
        // Ensure experiments are not placed on (0,0) or (width-1, height-1)
        for (auto& exp : experimentCoordinates) {
            if (exp == scientistPosition || exp == goalPosition) {
                exp = {-1, -1}; // Invalid experiment position, avoid placing it
            }
        }
    }

    // Display the current game state
    bool displayState() {
        if (state == WIN) {
            std::cout << "You win!" << std::endl;
            return true;
        } else if (state == LOSE) {
            std::cout << "You lose :(" << std::endl;
            return true;
        } else {
            std::cout << "Game on" << std::endl;
            return false;
        }
    }

    // Move the player (scientist) and check win/lose conditions
    void movePlayer(int dx, int dy) {
        if (state != PLAYING) return;

        // Update position within bounds
        int newX = scientistPosition.first + dx;
        int newY = scientistPosition.second + dy;

        if (newX >= 0 && newX < width && newY >= 0 && newY < height) {
            scientistPosition = {newX, newY};

            // Check for win condition
            if (scientistPosition == goalPosition) {
                state = WIN;
            }

            // Check if player moves to an experiment
            for (const auto& exp : experimentCoordinates) {
                if (exp == scientistPosition) {
                    state = LOSE;
                    break;
                }
            }
        }
    }

    // Print the current grid
    void printGrid() {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (std::make_pair(x, y) == scientistPosition) {
                    std::cout << 'P'; // Scientist player
                } else if (std::make_pair(x, y) == goalPosition) {
                    std::cout << 'G'; // Goal
                } else {
                    bool isExperiment = false;
                    for (const auto& exp : experimentCoordinates) {
                        if (std::make_pair(x, y) == exp) {
                            std::cout << 'E'; // Experiment
                            isExperiment = true;
                            break;
                        }
                    }
                    if (!isExperiment) {
                        std::cout << '_'; // Empty spot
                    }
                }
            }
            std::cout << std::endl;
        }
    }
};

#endif 