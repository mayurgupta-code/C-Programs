//low and high are the indecices here low is zero and high is the index of the last element i.e., (size-1)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int element){
  for (int i=0; i<size; i++){
    if (arr[i] == element){
      return i;
    }
  }
  return -1;
}

int binarySearch(int arr[], int size, int element){
  int low = 0, mid, high = (size-1);
  //search starts
  while (low <= high){
    mid = (low + high)/2; //C gives the greatest integer 11/2 = 5

    if (arr[mid] == element){
      return mid;
    }
    if (arr[mid] < element){
      low = mid;
    }
    else{
      high = mid;
    }
  }
  //search ends
  return -1;
}

int main(){
  //Unsorted array useful only for the linear search
  //sorted array can be used in both types of the search
  int arr[] = {1,2,4,30,70,83,98,102,110,430,500};
  int size = sizeof(arr)/sizeof(int);
  int element = 110;

  //int searchindex = linearSearch(arr, size, element);
  int searchindex = binarySearch(arr, size, element);
  //search result from both the types of search is same if sorted array is used

  printf("Index of %d element is %d\n", element, searchindex);

  return 0;
}
