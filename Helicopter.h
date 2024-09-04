#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <iostream>
#include "AirCraft.h"

class Helicopter : public AirCraft {
private:
std::string name;
public:
Helicopter();
Helicopter(int weight, std::string name);
void set_name(std::string);
std::string get_name();
void fly(int headwind, int minutes);
};







#endif