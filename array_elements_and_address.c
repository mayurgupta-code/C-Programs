#include <stdio.h>

void printaray(int x[]);
void printadd(int x[]);
int main() {
  /* code */

  int x[15];
  for (int i = 0; i<15; i++){
    x[i] = i;
  }

  printaray(x);
  printadd(x);

  return 0;
}


void printaray(int x[]){

  for (int i=0; i<15; i++){
    printf("Value in the array is %d\n",x[i]);
  }

}

void printadd(int x[]){
  for(int i=0; i<15; i++){
    printf("Value in the array is %d and address is %lu\n\n",x[i],&x[i]);
  }

}
