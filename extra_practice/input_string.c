#include <stdio.h>
#include <string.h>

int main(){
  char str[1]; //always declare string like this then adapt any type of the method scanf is one of the better
  char letter;

  printf("\nEnter string : ");

  //Method 1 : using gets()
  //gets(str);

  //Method 2 : using fgets()
  //fgets(str, max_limit, stdin);

  //fgets(str, 100, stdin);

  //Method 3 : Using %[^\n]%*c inside scanf
  scanf("%[^\n]%*c",str);
  printf("\n%lu\n",strlen(str));


  printf("\n%s\n", str);


  return 0;
}
