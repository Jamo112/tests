#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include "AirCraft.h"

class Airplane : public AirCraft {
private:
int numPassengers;
public:
Airplane();
Airplane(int weight, int numPassengers);
void reducePassengers(int x);  
int get_numPassengers();
void fly(int headwind, int minutes);
};







#endif