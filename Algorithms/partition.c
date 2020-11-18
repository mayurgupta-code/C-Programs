// Partition for QuickSort
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int *arr, int size){
  printf("array : ");
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void Partition(int A[], int low, int high){
  int i = low+1;
  int j = high;
  int pivot = A[low];
  int temp, temp1;

  while (i <= j){
    if (A[i] < pivot){
      printf("i %d\n",i);
      i++;
    }
    else if (A[j] > pivot){
      printf("j %d\n",j);
      j=j-1;
    }
    else{
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  }
  //swap pivot and A[j]
  A[low] = A[j];
  A[j] = pivot;
  //int size = sizeof(A)/sizeof(int);
  PrintArray(A, 5);
}

int main(){
  int A[] = {7,15,2,8,10};
  //int A[] = {2,4,3,9,1,4,8,7,5,6};
  Partition(A, 0, 4);

  return 0;
}
