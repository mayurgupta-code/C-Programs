//Reverse an array

#include<stdio.h>


//Function to reverse the array
void reverse(int *arr, int n){
  int temp1;
  int temp2;
  for(int i=0; i<(n/2); i++){
    temp1 = arr[i];
    temp2 = arr[n-i-1];
    //swap case
    arr[i] = temp2;
    arr[n-i-1] = temp1;

  }
}

//Printing elements of array using Function
//*arr stores the address of the array that means arr is the pointer

void PrintArray(int *arr, int n){
  for (int i=0; i<n; i++){
    printf("The value of %d element is %d\n",i,arr[i]);
  }
}


int main(){
  //initializing array
  int arr[9] = {1,2,3,4,5,6,7,8,9};

  //printing an array
  printf("Array before reversing\n");
  PrintArray(arr, 9);

  reverse(arr, 9);
  printf("Array after reversing\n");
  PrintArray(arr, 9);

  return 0;
}
