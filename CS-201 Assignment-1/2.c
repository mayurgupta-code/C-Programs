#include <stdio.h>
void countElement(int arr[],int size);
int main()
{
  int size;
  printf("enter the number of element - ");
  scanf("%d",&size);
  int arr[size];
  printf("enter element you want to store -");
  for(int i=0;i<size;i++)
  {
    int a; scanf("%d",&a); arr[i]=a;
  }
  countElement(arr,size);
}
void countElement(int arr[],int size) {
  int a[size];
  for(int i=0;i<size;i++)
  {
    a[i]=0;
  }
  for(int i=0;i<size;i++) {
    int count=0; if(a[i]==1) {
    continue;
}
  for(int j=0;j<size;j++) {
    if(arr[i]==arr[j]) {
    count++;
    a[j]=1;
  }
}
  printf("%d is present %d times\n",arr[i],count);
}
}
