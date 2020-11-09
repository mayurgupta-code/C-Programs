//INSERTION Sort
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void insertionSort (int arr[], int size){
  int temp, j, element = arr[1];

  if (arr[0] > element){
    temp = arr[0];
    arr[0] = element;
    arr[1] = temp;
  }
  for (int i=2; i<size; i++){
    element = arr[i];
    j = i-1;
    while ( j > -1 ){
      if (arr[j] <= element){
        break;
      }
      else{
        temp = arr[j];
        arr[j] = element;
        arr[j+1] = temp;
      }
      j = j-1;
    }
  }
  //PrintArray(arr, size);
}

int main(){
  int arr[] = {7,5,9,2,17,4};
  //int arr[] = {1,2,3,4,5,6,7};
  int size = sizeof(arr)/sizeof(int);

  printf("Array before Bubble Sort : ");
  PrintArray(arr, size);

  insertionSort(arr, size);

  printf("Array after Insertion Sort : ");
  PrintArray(arr, size);

  return 0;
}
