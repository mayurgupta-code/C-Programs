#include<stdio.h>

int main(){

    int r,c;

    printf(" Enter the Numbers of rows and columns of matrix : -\n");
    scanf("%d%d",&r,&c);

    int arr[r][c],count=0;

    printf("\n Enter Elements of Arry row wise : - \n");
    for(int i=0 ; i<r ; ++i){
        for(int j=0 ; j<c ; ++j){
            printf(" Element (%d,%d) : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
                count++;
        }
    }

    if( count >= ((r*c)/2) ){
        printf("\n THE MATRIX IS A SPARSE MATRIX.");
    }else{
        printf("\n THE MATRIX IS NOT A SPARSE MATRIX.");
    }

    return 0;
}
