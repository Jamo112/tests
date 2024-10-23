#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>  // We use std::tuple to represent positions (x, y)

class GridItem {
protected:
    std::tuple<int, int> coordinates; // Stores the (x, y) position.
    int width; 
    int height;
    int gridItems;
public:
    // Constructor to initialize position and type of the game entity.
    GridItem(int x, int y, int width, int height) : GridItem() {
            gridItems++;
        }
    
    GridItem();

    // Getter function to return the current position of the entity.
    std::tuple<int, int> getCoordinates() const {
        return coordinates;
    }

    virtual ~GridItem() {
        gridItems=gridItems-1;
    }

    int getGridWidth(){
        return width;
    }

    int getGridHeight(){
        return height;

    }

    int getActiveGridItemCount(){
        return gridItems;
    }
    // Setter function to change the position of the entity.
    void setCoordinates(int x, int y) {
        coordinates = std::make_tuple(x, y);
    }

};

#endif