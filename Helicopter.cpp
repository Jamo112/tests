#include <iostream>
#include "Helicopter.h"
#include "AirCraft.h"

Helicopter::Helicopter() : AirCraft(0), name("null") {
}

Helicopter::Helicopter (int weight, std::string name): AirCraft(weight), name("null") {};

void Helicopter::set_name(std::string name){
    this-> name = name;   
}

std::string Helicopter::get_name(){
    return name;
}
void Helicopter::fly(int headwind, int minutes){
    float fuelUsageFlight;
    float fuelUsageWeight;
    if (headwind<40){
        fuelUsageFlight = 0.2*(minutes);
    }
    else {
        fuelUsageFlight = 0.4*(minutes);
    }
    if (weight>5670)
        fuelUsageWeight = (weight-5670)*0.01*minutes;

        float fuelUsageTotal = fuelUsageFlight+fuelUsageWeight;

    if (fuel-fuelUsageTotal>20){
        numberOfFlights++;
        fuel -= fuelUsageTotal;
    }
    

}