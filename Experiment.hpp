#ifndef EXPERIMENT_HPP
#define EXPERIMENT_HPP

#include "Interactable.hpp"
#include "Helper.hpp" 

class Experiment : public Interactable {
public:
    // initializes the experiment's position and size
    Experiment(int x, int y, int width, int height) 
        : Interactable(x, y, width, height) {}

    // Defines interaction with the scientist
    bool interact(Scientist* player) override {
        // Calculate distance between the scientist and experiment
        int distance = Helper::manhattanDistance(getCoordinates(), player->getCoordinates());

        // If the distance is 0, run
        if (distance == 0) {
            player->runExperiment();

            // Check if visited more than 3 experiments
            if (player->getExperimentCount() > 3) {
                return true;  // Scientist is exhausted
            }
            return false;
        }
        return false;
    }

    // Return interactable as experiment
    InteractableType getType() override {
        return EXPERIMENT;
    }
};

#endif 