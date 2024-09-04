#include <iostream>
#include "Airplane.h"
#include "AirCraft.h"

Airplane::Airplane() : AirCraft(0), numPassengers(0) {
}

Airplane::Airplane (int weight, int numPassengers): AirCraft(weight), numPassengers(100) {};

void Airplane::reducePassengers(int x){
    numPassengers -= x;
    if (numPassengers<0){
        numPassengers = 0;
    }
}
int Airplane::get_numPassengers(){
    return numPassengers;
}
void Airplane::fly(int headwind, int minutes){
    float fuelUsageFlight;
    float fuelUsagePassenger;
    if (headwind<60){
        fuelUsageFlight = 0.3*(minutes);
    }
    else {
        fuelUsageFlight = 0.5*(minutes);
    }
        fuelUsagePassenger = 0.001*numPassengers*minutes;

        float fuelUsageTotal = fuelUsageFlight+fuelUsagePassenger;

    if (fuel-fuelUsageTotal>20){
        numberOfFlights++;
        fuel -= fuelUsageTotal;
    }
    

}