//Reverse an array

#include<stdio.h>

/*
//Function to reverse the array
void reverse(int *arr, int n){

}
*/
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
  //int i = 0;
  /*
  for(int i=0; i<9; i++){
    printf("The value of %d element is %d\n",i,arr[i]);
  }
  */
  PrintArray(arr, 9);
  return 0;
}
