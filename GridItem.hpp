#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>  // We use std::tuple to represent positions (x, y)

class GridItem {
protected:
    std::tuple<int, int> coordinates; // Stores the (x, y) position.
    int width; 
    int height;
    static int gridItems;  // Static to track the number of GridItem instances

public:
    // Default constructor
    GridItem() : coordinates(std::make_tuple(0, 0)), width(0), height(0) {
        gridItems++;
    }

    // Constructor to initialize position and dimensions of the game entity.
    GridItem(int x, int y, int width, int height) 
        : coordinates(std::make_tuple(x, y)), width(width), height(height) {
        gridItems++;
    }

    // Destructor
    virtual ~GridItem() {
        gridItems--;
    }

    // Getter function to return the current position of the entity.
    std::tuple<int, int> getCoordinates() const {
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

    // Returns the number of active GridItem instances
    static int getActiveGridItemCount() {
        return gridItems;
    }

    // Setter function to change the position of the entity.
    void setCoordinates(int x, int y) {
        coordinates = std::make_tuple(x, y);
    }
};

// Initialize the static member variable
int GridItem::gridItems = 0;

#endif