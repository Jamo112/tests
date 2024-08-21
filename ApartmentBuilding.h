#ifndef APARTMENT_H
#define APARTMENT_H
#include "Unit.h"

class ApartmentBuilding {
private:
int Capacity;
int Current_Nom_Units;
Unit* unit;


public:
ApartmentBuilding();
ApartmentBuilding(int Capacity);   
int get_Capacity();
int get_Current_Number_of_Units();
Unit * get_Contents();
bool add_Unit(Unit unit);
~ApartmentBuilding();
};




#endif