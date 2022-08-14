#include <stdio.h>

void showMat3(int arr[3][3]){
  for(int i=0; i < 3; i++){
    for(int j=0; j < 3; j++){
      printf("| %d\t", arr[i][j]);
    }
    printf("\n");
  }

}

void tra3(int arr[3][3]){
  int sum = 0;
  for(int i = 0; i < 3; i++){
    sum += arr[i][i];
  }
  printf("\nTrace is %d\n", sum);
}

void reflect3(int a[3][3]){
  int b[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      b[i][j] = a[j][i];
    }
  }
  showMat3(b);
}

void det3(int arr[3][3]){
  int det;
  det = arr[0][0]*(arr[1][1]*arr[2][2] - arr[2][1]*arr[1][2]) - arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]) + arr[0][2]*(arr[1][0]*arr[2][1] - arr[2][0]*arr[1][1]);
  printf("\ndet(A) = %d\n", det);
}

int main(){
  int arr[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Enter a[%d,%d] value of Matrix-A\n", (i+1), (j+1));
      scanf("%d", &arr[i][j]);
    }
  }

  while(1){
    int p;
    printf("\n1 for displaying the Matrix-A\n2 for trace of the matrix\n3 for transopse\n4 for det(A)\n0 for breaking the loop\n");
    scanf("%d", &p);
    switch(p){
      case 1:
        showMat3(arr);
        break;
      case 2:
        tra3(arr);
        break;
      case 3:
        reflect3(arr);
        break;
      case 4:
        det3(arr);
        break;
    }
    if(p == 0){
      break;
    }
  }

  return 0;
}