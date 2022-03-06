/*
    Author: Abdullah Al Arafat
    Description: Calculating the sum of all numbers between 1 to 100
    Date: 06-March-2022
*/


// including header file
#include <stdio.h>

// main function
int main(){
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("The sum is %d", sum);

    return 0;
}