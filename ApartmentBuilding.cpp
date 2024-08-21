#include "Unit.h"
#include "ApartmentBuilding.h"

ApartmentBuilding:: ApartmentBuilding() : Capacity(10), Current_Nom_Units(0){};

ApartmentBuilding::ApartmentBuilding(int Capacity){
this-> Capacity = Capacity;
unit = new Unit[Capacity];
};

int ApartmentBuilding::get_Capacity(){
    return Capacity;
}

int ApartmentBuilding::get_Current_Number_of_Units(){
    return Current_Nom_Units;
}

bool ApartmentBuilding::add_Unit(Unit New_unit){
        if(Current_Nom_Units<Capacity){
            unit[Current_Nom_Units]=New_unit;
            Current_Nom_Units++;
            return true;
        }
        return false;
}

Unit * ApartmentBuilding::get_Contents(){
    return unit;
}

ApartmentBuilding::~ApartmentBuilding(){
delete[] unit; 
}

