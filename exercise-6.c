/*
    Author: Abdullah Al Arafat
    Description: Printing "I Love bangladesh" 100 times
    Date: 06-March-2022
*/


// including header file
#include <stdio.h>

// main function
int main(){
    // using while loop
    int n = 1;
    while (n <= 100)
    {
        printf("I Love Bangladesh \n");
        n++;  // you can also use n = n + 1 or n += 1
    }

    // ----***----

    // using do-while loop
    // int p = 1;
    // do
    // {
    //     printf("I Love Bangladesh \n");
    //     p += 1;
    // } while (p <= 100);

    // ----***----

    // using for loop

    // for (int i = 1; i <= 100; i++)
    // {
    //     printf("I Love Bangladesh \n");
    // }    

    return 0;
}