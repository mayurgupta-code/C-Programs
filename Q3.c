#include<stdio.h>

int Fibonacci_term(int x){
    if(x==0)
    return 0;

    if(x==1 || x==2)
    return 1;

    return Fibonacci_term(x-1) + Fibonacci_term(x-2);
}

int main(){

    int x,k;
    printf(" Enter the term to be find in Fibonacci series : ");
    scanf("%d",&x);
    k=Fibonacci_term(x);

    printf("\n %d term of series is %d ",x,k);
}
