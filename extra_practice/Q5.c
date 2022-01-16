#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100],s[100],ch,*ptr,*ptr2,i=0,j=0;
    ptr2=s;
    printf("Enter a String :");
    gets(str);
    printf("Enter the Character you Want to Delete :");
    scanf("%c",&ch);
    ptr = str;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)!=ch)
        {
            *(ptr2+j) = *(ptr+i);
            j++;
        }
        i++;
    }
    printf("%s",ptr2);
    return 0;
}
