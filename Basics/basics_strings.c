#include <stdio.h>
#include <string.h>

int main(){
  //initializing string
  //Printing string
  /*
  char s[] = {'m','a','y','u','r','\0'};
  printf("%s\n",s);
  */

  /*
  char s[] = "mayur";
  printf("%s\n",s);
  */

  /*
  char s[] = "mayur";
  puts(s);
  */

  //Taking input of the string
  /*
  char s[10];
  scanf("%s",s);
  printf("string entered is %s\n",s);
  */

  /*
  char s[10];
  gets(s);
  printf("Entered string is ");
  puts(s);
  */

  //Declaring string using pointers
  /*
  char *ptr = "mayur";
  puts(ptr);
  printf("Entered string is %s\n",ptr);
  */

  //iterating string as the pointers
  //main logic is that string terminates at the null character '\0'
  char s[] = "mayur";
  //printf("String is the array of characters\n");
  /*
  for (int i=0; s[i]!='\0'; i++){
    printf("%c\n",s[i]);
  }
  */

  /*
  int i = 0;
  while (s[i] != '\0'){
    printf("Element at %d is %c\n",i,s[i]);
    i++;
  }
  */


  return 0;
}
