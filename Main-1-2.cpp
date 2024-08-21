#include "Unit.h"
#include "ApartmentBuilding.h"
#include <iostream>


int main() {
    ApartmentBuilding m1;
    std::cout << "Default Value: " << m1.get_capacity() << ", Default Bedrooms " << m1.get_Current_Number_of_Units() << ", Default size " << m1.get_Contents() << std::endl;

    ApartmentBuilding m2(10);
    std::cout << "Changed Value: " << m2.get_capacity() << ", changed Bedrooms " << m2.get_Current_Number_of_Units() << ", Changed size " << m2.get_Contents() << std::endl;

    return 0;
}



