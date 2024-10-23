#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Scientist.hpp"
#include "Helper.hpp"  

class Goal : public Interactable {
public:
    // Constructor initialises the goal's position and size
    Goal(int width, int height) : Interactable(0, 0, width, height) {}

    // Defines the interaction with the scientist
    bool interact(Scientist* player) override {
        int distance = Helper::manhattanDistance(getCoordinates(), player->getCoordinates());

        // Return true if distance is 0 and the scientist has completed at least 1
        if (distance == 0 && player->getExperimentCount() >= 1) {
            return true;
        }
        return false;
    }

    // Return the type of Interactable as GOAL
    InteractableType getType() override {
        return GOAL;
    }
};

#endif 