#include<iostream>

void modifyArray(double* array, int size, double value){
    std::cout<<"the value of each array value plus the given value is : "<<std::endl;
        for(int i=0;i<size;i++){
            array[i] += value;
            std::cout<< array[i]<<std::endl;
        }
    
    }
    
