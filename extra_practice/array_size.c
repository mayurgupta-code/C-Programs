// c program to find the size of an array

#include <stdio.h>


int main(){
  int size;

  int arr[] = {1,2,3,4,5};

  size = sizeof(arr) / sizeof(arr[0]);

  printf("\nSize of Array is %d\n",size);

  return 0;
}
