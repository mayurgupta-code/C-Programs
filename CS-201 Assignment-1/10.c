#include<stdio.h>
// Linear Search
void LinearSearch(int arr[],int size,int a){
for(int i=0 ; i<size ; ++i){
if(a==arr[i]){
printf("\n Element %d found at position %d .",a,i+1); return;
}
}
printf("\n Element %d NOT FOUND!!.",a);
}
void BinarySearch(int arr[],int size,int a){
    int beg,last,mid;
  beg=0;
  last=size-1;
  while(beg<=last){ mid = (beg+last)/2; if(a==arr[mid]){
  printf("\n Element %d found at position %d .",a,mid+1);
  return;
  }else if(a >arr[mid]) {
  beg = mid+1; }else{
  last = mid-1; }
  }

printf("\n Element %d NOT FOUND!!.",a); }
int main()
{
  int arr[] = { 1,12,7,90,6,8,84,77,69,59,71,171}; int a;
  printf("\n----Linear Search----\n");
  printf(" Enter the Element to be found : "); scanf("%d",&a);
  LinearSearch(arr,13,a);
  printf("\n----Binary Search----\n");
  printf(" Enter the Element to be found : "); scanf("%d",&a);
  BinarySearch(arr,13,a);
}
