#include <iostream>

extern double arrayMin(double* array, int size);

int main(){
    double array[] = {1,2,3,4,0};
    int size = (sizeof(array))/(sizeof(array[0]));

    std::cout<<"the min value of the array is: "<< arrayMin(array,size) <<std::endl;

    return 0;
}