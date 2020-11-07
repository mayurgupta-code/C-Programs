//BUBBLE Sort
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

//here we compare the two elements of the array at a time
//like 0,1 1,2 2,3 3,4 this type by int c=0 and c+1
//first for loop is for "passes" that is (n-1) to how much time for bubble sort need to be passes
//second while loop is for to execute a particular pass
//in second loop firstly in first pass n-1 comparisons and swaps are there
//then comp. and swaps goes on decreasing successively after each passes

void bubbleSort(int *arr, int size){
  int temp = 0; //temp is for to swap the two elements of the array
  for (int i=0; i<(size-1); i++){
    int c = 0;
    int j = (size-1);
    while( j != 0 ){
      if (arr[c] > arr[c+1]){
        temp = arr[c+1];
        arr[c+1] = arr[c];
        arr[c] = temp;
      }
      c++;
      j = j-1;
    }
  }
  //no need of this becoz. change is made in the original array
  //PrintArray(arr, size);
}

int main(){
  int arr[] = {7,11,9,2,17,4};
  int size = sizeof(arr)/sizeof(int);

  printf("Array before Bubble Sort : ");
  PrintArray(arr, size);

  bubbleSort(arr, size);

  printf("Array after Bubble Sort : ");
  PrintArray(arr, size);


  return 0;
}
