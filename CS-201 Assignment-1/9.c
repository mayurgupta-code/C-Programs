#include<stdio.h>
int arr[50],size;
int main(){
  printf(" Enter size of arry : ");
  scanf("%d",&size);

  printf(" Enter Elements of Arry : - \n"); for(int i=0 ; i<size ; ++i){
  printf(" Element %d : ",i+1);
  scanf("%d",&arr[i]);
}
  int a;
  for(int i=0 ; i<size ; ++i){
    a=arr[i];
  for(int j=i+1 ; j<size ; ++j){
    if(a==arr[j]){
  for(int k=j ; k<size-1 ; ++k){
    arr[k] = arr[k+1];
  }
  size--;
}
  }
  }
  printf("\nARRAY AFTER MODIFICATION \n");
  for(int i=0 ; i<size ;++i){

  printf("%d ", arr[i]);
  }
  return 0;
}
