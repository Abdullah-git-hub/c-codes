/*
    Author: Abdullah Al Arafat
    Description: Taking input as Fahrenheit and then converting it to Celsius
    Date: 06-March-2022
*/


// including header file
#include <stdio.h>

// main function
int main(){
    double Far, Cel;
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%lf", &Far);

    // calculations for converting
    Cel = (Far - 32) * 5/9;
    printf("Temperature in Celsius is %lf", Cel);

    return 0;
}