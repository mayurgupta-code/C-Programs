#include <stdio.h>

int main(){
  int arr[] = {19,45,71,66};
  int size;
  size = sizeof(arr)/sizeof(int);
  
  printf("Size of the array : %d", size);

  return 0;
}
