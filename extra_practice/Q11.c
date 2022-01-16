#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr = (int*)malloc(10*sizeof(int));

    printf(" ENTER ELEMENTS OF ARRAY : -\n");
    for(int i=0 ; i<10 ;++i){
        printf(" Element %d : ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n ELEMENTS OF ARRAY ARE : -\n");
    for(int i=0 ; i<10 ;++i){
        printf(" %d, ",arr[i]);
    }

}
