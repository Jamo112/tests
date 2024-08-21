#include "Unit.h"
#include <iostream>


int main() {
    Unit m1;
    std::cout << "Default Value: " << m1.get_Value() << ", Default Bedrooms " << m1.get_Num_Bedrooms() << ", Default size " << m1.get_Area() << std::endl;

    Unit m2(100, 100, 100);
    std::cout << "Changed Value: " << m2.get_Value() << ", changed Bedrooms " << m2.get_Num_Bedrooms() << ", Changed size " << m2.get_Area() << std::endl;

    return 0;
}



