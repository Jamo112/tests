#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
protected:
int weight;
float fuel; 
int numberOfFlights;
int minutes;         

public:
AirCraft();
AirCraft(int weight); 
void refuel();
virtual void fly(int headwind, int minutes);
void set_weight(int weight);
int get_weight();
void set_fuel(int fuel);
float get_fuel();
void set_numberOfFlights(int numberOfFlights);
int get_numberOfFlights();
};


#endif