/*
    Author: Abdullah Al Arafat
    Description: Printing "I Love bangladesh"
    Date: 06-March-2022
*/


// including header file
#include <stdio.h>

// main function
int main(){
    // printf("I Love Bangladesh");
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", a, i, (a*i));
    }
    
    return 0;
}