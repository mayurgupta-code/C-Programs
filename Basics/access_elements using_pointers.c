//Accessing arrays using Pointers

#include<stdio.h>

int main(){
  int arr[4] = {4,5,2,6};
  int *ptr = &arr[0];

  //printf("Accessing first value of array using pointer %d \n",*ptr);

  int i = 0;
  while(i < 4){
      //printf("Accessing %d elements using pointers %d\n",i,*ptr);
      printf("Accessing %d elements using pointers %d\n",i,*(ptr+i));
      printf("Address of %d element is %lu\n",i,(ptr+i));
      i++;
      //ptr++ is the next element of the array
      //ptr++;
  }

  return 0;
}
