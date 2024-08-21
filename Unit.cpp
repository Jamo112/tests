#include "Unit.h"

Unit:: Unit() : unit_val(0), num_beds(0), unit_size(0) {};

Unit::Unit(int unit_val, int num_beds, double unit_size){
this-> unit_val = unit_val;
this-> num_beds = num_beds;
this-> unit_size = unit_size;
if (unit_val<0){
    unit_val = 0;
}
if (num_beds<0){
    unit_val = 0;
}
if (unit_size<0){
    unit_size = 0;
}

};

int Unit::get_Num_Bedrooms(){
    return num_beds;
}

int Unit::get_Value(){
return unit_val;
}

double Unit::get_Area(){
return unit_size;
}
