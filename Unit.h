#ifndef UNIT_H
#define UNIT_H
#include "Unit.h"

class Unit {
private:
int unit_val;
int num_beds;
double unit_size;

public:
Unit();
Unit(int unit_val, int num_beds, double unit_size);   
int get_Num_Bedrooms();
int get_Value();
double get_Area();
};




#endif