#include <iostream>
#include "AirCraft.h"

AirCraft::AirCraft() : weight(0), fuel(100), numberOfFlights(0) {
}

AirCraft::AirCraft(int weight) : weight(weight), fuel(100), numberOfFlights(0) {
}

void AirCraft::refuel(){ //refuels craft to 100%
    this->fuel=100;
}
void AirCraft::fly(int headwind, int minutes){
    numberOfFlights++;
}
void AirCraft::set_weight(int weight){
    this->weight=weight;
}
int AirCraft::get_weight(){
    return weight;
}
void AirCraft::set_fuel(int fuel){
    this->fuel=fuel;
}
float AirCraft::get_fuel(){
    return fuel;
}
void AirCraft::set_numberOfFlights(int numberOfFlights){
    this->numberOfFlights=numberOfFlights;
}
int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}