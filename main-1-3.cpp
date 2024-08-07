#include <iostream>

extern double* duplicateArray(double* array, int size);

int main(){
    double array[] = {1,2,3,4,0};
    int size = (sizeof(array))/(sizeof(array[0]));

    return 0;
}