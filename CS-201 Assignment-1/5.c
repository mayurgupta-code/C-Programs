#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char str[100],s[100],ch,*p,*p2,i=0,j=0;
  p2=s;
  printf("Enter a String :");
  gets(str);
  printf("Enter any Character you Want to Delete :");
  scanf("%c",&ch);
  p = str;
  while(*(p+i)!='\0'){
    if(*(p+i)!=ch) {
      *(p2+j) = *(p+i);
      j++;
  }
    i++;
}
  printf("\n%s\n",p2);
  
  return 0;
}
