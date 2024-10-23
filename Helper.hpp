#ifndef HELPER_HPP
#define HELPER_HPP

#include <cmath>      // for std::abs
#include <utility>    // for std::pair

class Helper {
public:
    // Static function to calculate the Manhattan distance between two coordinates
    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        return std::abs(item1.first - item2.first) + std::abs(item1.second - item2.second);
    }

};

#endif 