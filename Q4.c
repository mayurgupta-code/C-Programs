#include<stdio.h>

int main(){

    int arr[50],size,*ptr,temp;

    printf(" Enter the size of arry (50 max.) : ");
    scanf("%d",&size);

    printf("\n Enter elements of arry : - ");
    for(int i=0 ; i<size ; ++i){
        printf("\n Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n BEFORE REVERSING ");
    for(int i=0 ; i<size ; ++i){
        printf(" %d ",arr[i]);
    }

    ptr = &arr[0];

    for(int i=0, n=size/2 ; i<n ; ++i){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+size-i-1);
        *(ptr+size-i-1) = temp;
    }

    printf("\n AFTER REVERSING ");

    for(int i=0 ; i<size ; ++i){
        printf(" %d ",arr[i]);
    }

    return 0;
}
