#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"
#include "Scientist.hpp"

// Enum for types
enum InteractableType {
    GOAL,
    EXPERIMENT
};

class Interactable : public GridItem {
protected:
    static int interactableCount;  //count for Interactable objects

public:
    // set position to (0,0) and grid size to (0,0)
    Interactable() : GridItem(0, 0, 0, 0) {
        interactableCount++;
    }

    // Constructor with parameters
    Interactable(int x, int y, int width, int height) 
        : GridItem(x, y, width, height) {
        interactableCount++;
    }

    // destructor removes from interactable count
    virtual ~Interactable() {
        interactableCount--;
    }

    // get count of interactable objects
    static int getActiveInteractableCount() {
        return interactableCount;
    }

    // virtual function to interact with scientist
    virtual bool interact(Scientist* player) = 0;

    // To return the type of Interactable
    virtual InteractableType getType() = 0;
};

// Initialise static count
int Interactable::interactableCount = 0;

#endif 