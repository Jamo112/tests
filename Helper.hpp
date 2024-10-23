#ifndef HELPER_HPP
#define HELPER_HPP

#include <tuple> 

class Helper {
    public:
        int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
            return std::abs(item2.first - item1.first) + std::abs(item2.second - item1.second);
}
};



#endif