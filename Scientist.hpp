#ifndef SCIENTIST_HPP
#define SCIENTIST_HPP

#include "GridItem.hpp"
#include <iostream>

class Scientist : public GridItem {
private:
    int experimentCount;  // Number of experiment stations the scientist has visited

public:
    // Constructor to initialize position to (0,0) and set experimentCount to 0
    Scientist(int gridWidth, int gridHeight)
        : GridItem(0, 0, gridWidth, gridHeight), experimentCount(0) {}

    // Get the experiment count
    int getExperimentCount() const {
        return experimentCount;
    }

    // add to the number of experiment counts
    void runExperiment() {
        experimentCount++;
    }

    // Move the scientis
    bool move(int xOffset, int yOffset) {
        if (std::abs(xOffset) > 2 || std::abs(yOffset) > 2) {
            return false;  // Invalid move
        }

        int newX = getCoordinates().first + xOffset;
        int newY = getCoordinates().second + yOffset;

        //  move stays within grid
        if (newX >= 0 && newX < width && newY >= 0 && newY < height) {
            setCoordinates(newX, newY);
            return true;
        }
        return false;
    }
};

#endif