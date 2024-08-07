#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){
    double array[] = {10,2,3,4,0};
    double value = 2;
    int size = (sizeof(array))/(sizeof(array[0]));

    modifyArray(array,size,value);

    return 0;
}