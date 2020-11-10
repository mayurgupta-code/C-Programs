//SELECTION Sort
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void selectionSort(int arr[], int size){
  int min;
  int j=0;
  int temp;
  int index;

  for(int i=0; i<(size-1); i++){ //for no. of passes
    j = i;
    index = i;
    min = arr[j];
    while ( j < (size-1) ){
      if (min > arr[j+1]){
        min = arr[j+1]; //j+1 is the index of the min
        index = j+1;
      }
      j++;
    }
    if (index != i){
      temp = arr[i];
      arr[i] = min;
      arr[index] = temp;
    }
  }

}

int main(){
  //int arr[] = {7,5,9,2,17,4};
  //int arr[] = {1,2,3,4,5,6,7};
  int arr[] = {3,1,7,0,8,12};
  int size = sizeof(arr)/sizeof(int);

  printf("Array before Selection Sort : ");
  PrintArray(arr, size);

  selectionSort(arr, size);

  printf("Array after Selection Sort : ");
  PrintArray(arr, size);


  /*
  //Finding minimum inside the whole array
  int min = arr[0];
  for (int i=0; i<(size-1); i++){
    printf("min %d\n",min);
    if ( min > arr[i+1] ){
      min = arr[i+1];
    }
  }
  printf("Final minimum : %d\n",min);
  */

  return 0;
}
