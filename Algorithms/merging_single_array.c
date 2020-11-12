//Merging single sorted arrays from a point in single array
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}


void MerginginSingleArray(int A[], int low, int mid, int high){
  int B[high+1];
  int i = low;
  int j = mid+1;
  int k = low;

  while (i <= mid && j <= high){
    if (A[i] < A[j]){
      B[k] = A[i];
      i++;
      k++;
    }
    else{
      B[k] = A[j];
      j++;
      k++;
    }
  }
  while (i <= mid){
    B[k] = A[i];
    i++;
    k++;
  }
  while (j <= high){
    B[k] = A[j];
    j++;
    k++;
  }
  //Now copy back whole elements of B in A
  for (int i=0; i<=high; i++){
    A[i] = B[i];
  }

  PrintArray(A, (high+1));
}

int main(){
  int A[] = {7,15,2,8,10};

  MerginginSingleArray(A, 0, 1, 4);

  return 0;
}
