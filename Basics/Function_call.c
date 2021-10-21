#include <stdio.h>

//void Display(); //Function Prototype

void Display(){
  printf("I'm Display\n"); //Function Definition
}

int main(){
  printf("Initializing Display Function\n");
  Display(); //Function call
  printf("Display Finished its work\n");
}
/*
void Display(){
  printf("I'm Display\n");
}
*/


//If we define the function before the main then there is no prototype required
//else if function is defined after main then function prototype is must.
