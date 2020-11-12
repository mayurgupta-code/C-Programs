//Merging two sorted arrays such as new one is also sorted
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void MergingArrays(int A[], int B[], int C[], int m, int n){
  int i, j, k;
  i = j = k = 0;

  while ( (i < m) && (j < n) ){
    if (A[i] < B[j]){
      C[k] = A[i];
      i++;
      k++;
    }
    else{
      C[k] = B[j];
      j++;
      k++;
    }
  }
  while (i < m){
    C[k] = A[i];
    i++;
    k++;
  }
  while (j < n){
    C[k] = B[j];
    j++;
    k++;
  }
  PrintArray(C, (m+n));
}

int main(){
  int A[] = {7,8,12,22};
  int B[] = {1,2,11};
  int m = sizeof(A)/sizeof(int);
  int n = sizeof(B)/sizeof(int);
  int C[m+n];

  /*
  printf("Array before Selection Sort : ");
  PrintArray(arr, size);


  printf("Array after Selection Sort : ");
  PrintArray(arr, size);
  */
  MergingArrays(A, B, C, m, n);


  return 0;
}
