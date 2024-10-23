#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility> 

class GridItem {
protected:
    std::pair<int, int> coordinates;  // Store (x, y) coordinates
    int width;
    int height;
    static int gridItems;  // Static counter for active GridItem instances

public:
    // Default constructor initializes everything to zero
    GridItem() : coordinates({0, 0}), width(0), height(0) {
        gridItems++;
    }

    // Parameterized constructor to set coordinates, width, and height
    GridItem(int x, int y, int width, int height) 
        : coordinates({x, y}), width(width), height(height) {
        gridItems++;
    }

    // Destructor decrements the static count
    virtual ~GridItem() {
        gridItems--;
    }

    // Setter for coordinates
    void setCoordinates(int x, int y) {
        coordinates = std::make_pair(x, y);
    }

    // Getter for coordinates
    std::pair<int, int> getCoordinates() const {
        return coordinates;
    }

    // Getter for grid width
    int getGridWidth() const {
        return width;
    }

    // Getter for grid height
    int getGridHeight() const {
        return height;
    }

    // Static function to get the number of active GridItem objects
    static int getActiveGridItemCount() {
        return gridItems;
    }
};

// Initialize the static counter
int GridItem::gridItems = 0;

#endif