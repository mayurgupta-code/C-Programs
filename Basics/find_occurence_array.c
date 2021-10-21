//WAP to find the number of occurences of each element of an array in that array.

#include <stdio.h>


void repeat(int arr[], int size, int n){

  int count = 0;
  for (int i=0; i<size; i++){
    if (arr[i] == n){
      count++;
    }
  }
  printf("No. of occurences of %d is %d\n", n, count);
}


int main(){
  int size;
  int n;

  printf("Enter size of the array\n");
  scanf("%d",&size);
  //int arr[] = {1,2,3,4,5,2,3,1,1,1,2,5,6,6,3};
  int arr[size];

  //size = sizeof(arr) / sizeof(arr[0]);

  printf("\n---Enter Elements---\n");
  for (int i=0; i<size; i++){
    printf("\nEnter %d Element : ",i);
    scanf("%d",&arr[i]);

  }

  //To print the elements
  for (int i=0; i<size; i++){
    printf("\nElement %d is %d ", i, arr[i]);
  }

  printf("\n--Enter Element to find occurrence of it : ");
  scanf("%d",&n);
  repeat(arr, size, n);


  return 0;
}
