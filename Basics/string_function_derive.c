#include <stdio.h>
#include <string.h>

int main(){
  char s[6] = {'m','a','y','u','r','\0'};
  //s[5] gives an error
  //that means now the length of the string is 6 not 5
  /*
  for (int i=0; s[i]!=0; i++){
    printf("%c\n",s[i]);
  }
  */

//Length of the string
  /*
  int len;
  len = strlen(s);
  printf("Length of string using strlen %d\n",len);

  int count;
  for (int i=0; s[i]!=0; i++){
    count++;
  }
  printf("\nLength of string using for loop %d\n",count);
  */

//Copy the string

  /*
  //Target string should have enough space to store the source string
  char target[10];

  strcpy(target,s);
  printf("Target string becomes %s using strcpy\n",target);

  char tar[10];

  for (int i=0; s[i]!='\0'; i++){
    tar[i] = s[i];
  }
  printf("\nTarget string becomes %s using for loop\n",tar);

  int len_tar;
  len_tar = strlen(tar);
  printf("\n%d\n",len_tar); //length of target string is also 5
  */

//Concatenating string


  char s1[6] = "mayur";
  //char s2[6] = "mansi";
  char s2[6] = "mayur";

  /*
  puts(s1);

  puts(s2);

  strcat(s1,s2);
  printf("String s1 after Concatenating \n");
  puts(s1);
  */

  /*
  puts(s1);
  puts(s2);
  int lens1 = 0;
  for (int i=0; s1[i]!='\0'; i++){
    lens1++;
  }

  for (int i=0; s2[i]!='\0'; i++){
    s1[(lens1-1)+i] = s2[i];
  }
  printf("String s1 after Concatenating s2\n");
  puts(s1);

  int lens2;
  lens2 = strlen(s2);
  printf("\n%d\n",lens2);
  */

//Compare the String
  /*
  int cmp;
  cmp = strcmp(s1,s2); //positive that means not equal
  printf("%d\n",cmp);

  int cmp2;
  cmp2 = strcmp("mayur","mayur"); //returns 0 that means equals
  printf("%d\n",cmp2);
  */
  int a, b;
  int count;
  for (int i=0; s1[i]!='\0'; i++){
    a = s1[i];
    b = s2[i];
    if (a != b){
      printf("String are not equal\n");
      break;
    }
    count++;
  }

  //printf("\n%d\n",count);
  if (count == strlen(s1)){
    printf("Strings are equal\n");
  }



  return 0;
}
