/*
    Author: Abdullah Al Arafat
    Description: calculating the sum of all odd numbers between 1 to 500 using loop
    Date: 06-March-2022
*/


// including header file
#include <stdio.h>

// main function
int main(){
    int n = 1;
    int sum = 0;

    // using while loop ---***---

    // while (n <= 500)
    // {
    //     printf("%d\n",n);
    //     sum += n; // you can use sum = sum + n
    //     n += 2;
    // }


    // using do-while loop ---***---

    // do
    // {
    //     printf("%d\n", n);
    //     sum += n;
    //     n += 2;
    // } while (n <= 500);


    // using for loop

    for (n; n <= 500; n += 2)
    {
        printf("%d\n", n);
        sum += n;
    }

    printf("The sum is %d \n", sum);

    return 0;
}