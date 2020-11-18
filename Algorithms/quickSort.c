// QuickSort
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

int Partition(int A[], int low, int high){
  int i = low+1;
  int j = high;
  int pivot = A[low];
  int temp;

  while (i <= j){
    if (A[i] < pivot){
      //printf("i %d\n",i);
      i++;
    }
    else if (A[j] >= pivot){
      //printf("j %d\n",j);
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
  //PrintArray(A, 9);
  return j;
}

void quickSort(int A[], int low, int high){
  int partitionIndex;

  if (low<=high){
    partitionIndex = Partition(A, low, high);
    //PrintArray(A, 10);

    quickSort(A, low, partitionIndex-1);
    quickSort(A, partitionIndex+1, high);
  }
}

int main(){
  //int A[] = {7,15,22,8,10,13};
  //int A[] = {7,15,22,8,10,23,1,4,45,22};

  //int A[] = {1,5,3,4,5};
  int A[] = {2,4,3,9,1,4,8,7,5,6};
  //Partition(A, 0, 4);
  int size = sizeof(A)/sizeof(int);
  printf("Array Before QuickSort : ");
  PrintArray(A, size);

  quickSort(A, 0, size-1);
  printf("Array After QuickSort : ");
  PrintArray(A, size);

  return 0;
}
