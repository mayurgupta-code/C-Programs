//Reversing array using pointers
#include <stdio.h>

//PrintArray using pointers
void PrintArray(int *arr, int n){
  int *ptr = &arr[0];
  //int *ptr2 = &arr[n-1];
  for (int i = 0; i<n; i++){
    printf("Element %d is %d\n",i,*(ptr+i));
  }
}

//Reversing using pointers
void reverse(int *arr, int n){
  int *ptr = &arr[0]; //first element
  //printf("0-%d\n",*ptr);
  int *ptr2 = &arr[n-1]; //last element
  //printf("4-%d\n",*ptr2);
  int temp;
  for (int i=0; i<(n/2); i++){
    //Firstly assign the first value to the another variable
    //so that it doesn't loss.
    temp = *(ptr+i);
    arr[i] = *(ptr2-i);
    arr[n-i-1] = temp;

  }
}


int main(){
  int arr[5] = {1,2,3,4,5};
  printf("Array before reverse\n");
  PrintArray(arr,5);

  reverse(arr,5);
  printf("Array after reverse\n");
  PrintArray(arr,5);

  return 0;
}
