/*
    Author: Abdullah Al Arafat
    Description: Calculating HCF & LCM of two number L,S (L < S)
    Date: 08-March-2022
*/


#include <stdio.h>

void showHCF(){
  int a, b;
  printf("Enter your first number: ");
  scanf("%d", &a);
  printf("Enter your second number: ");
  scanf("%d", &b);

  int divNum1[a], divNum2[b];
  int count1 = 0;
  int count2 = 0;
  
  for(int i = 1; i <= a; i++){
    if(a%i==0){
      divNum1[count1] = i;
      count1++;
    }
  }
  
  for(int d = 1; d <= b; d++){
    if(b%d==0){
      divNum2[count2] = d;
      count2++;
    }
  }
  long HFC = 0;
  
  for(int i = count1-1; i >= 0; i--){
    if(!HFC){
      for(int j = count2-1; j >= 0; j--){
        if(divNum1[i] == divNum2[j]){
          printf("\nThe HCF of %d and %d is %d\n", a,b,divNum1[i]);
          HFC = divNum1[i];
        }
      }
    }
  }

  printf("And LCM is %ld\n", (a*b)/HFC);
}

int main(){
  int k = 1;
  while(k == 1){
    showHCF();
    printf("\nDo you want to continue?\n(1 for yes, 0 for no): ");
    scanf("%d", &k);
  }

  return 0;
}