#include<stdio.h>


// Linear Search
void Lsearch(int arr[],int size,int x){

    for(int i=0 ; i<size ; ++i){
        if(x==arr[i]){
            printf("\n Element %d found at position %d .",x,i+1);
            return;
        }
    }

    printf("\n Element %d NOT FOUND!!.",x);
}

void Bsearch(int arr[],int size,int x){
    int beg,last,mid;
    beg=0;
    last=size-1;
    while(beg<=last){
        mid = (beg+last)/2;
        if(x==arr[mid]){
           printf("\n Element %d found at position %d .",x,mid+1);
           return;
        }else if(x >arr[mid]) {
            beg = mid+1;
        }else{
            last = mid-1;
        }
    }

    printf("\n Element %d NOT FOUND!!.",x);
}

void main(){
    int arr[] = { 1,1,2,3,4,46,80,87,97,100,100,115,171};
    int x;
    printf("\n----Linear Search----\n");
    printf(" Enter the Element to be found : ");
    scanf("%d",&x);
    Lsearch(arr,13,x);

    printf("\n----Binary Search----\n");
    printf(" Enter the Element to be found : ");
    scanf("%d",&x);
    Bsearch(arr,13,x);
}
