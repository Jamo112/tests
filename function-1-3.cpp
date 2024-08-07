#include <iostream>

double* duplicateArray(double* array, int size){
    double newArray[size];
        for(int i=0;i<size;i++){
                newArray[i]=array[i];
                }
    return newArray;
}