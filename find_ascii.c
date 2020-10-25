#include <stdio.h>

int main(){
  char c;

  printf("Enter the character : ");
  scanf("%c",&c);

  // %d displays the integer value (ASCII value) of the character
  // %c displays the actual character
  printf("ASCII value of %c is %d \n", c, c);

  //Storing ASCII value in a variable
  int a;
  a = c;
  printf("\n%d\n",a);

  //verifying that its stores correctly
  int b;
  b = a + 7;
  printf("\n%d\n",b);

  return 0;
}
