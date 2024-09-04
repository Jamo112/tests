#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"   

int main() {
    // Test default constructor
    AirCraft defaultAppliance;
    std::cout << "Default weight: " << defaultAppliance.get_weight() << std::endl;
    std::cout << "Default Number of flights: " << defaultAppliance.get_numberOfFlights() << std::endl;
    std::cout << "Default fuel: " << defaultAppliance.get_fuel() << std::endl;
    
    // Test parameterized constructor
    AirCraft Craft(500);
    std::cout << "Craft1 weight: " << Craft.get_weight() << std::endl;
    std::cout << "Craft1 numberOfFlights: " << Craft.get_numberOfFlights() << std::endl;
}