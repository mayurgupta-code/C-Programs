#include<stdio.h>
#include<string.h>
struct namedata{
  int phone;
  char a[10];
  char b[10];
  char c[10];
};
int main() {
  struct namedata d[100];
  int i,j,temp,n;
  printf("\n Enter no. of customers:\n");
  scanf("%d",&n);
  for(j=0;j<n;j++)
  {
    printf("\nEnter surname name\n");
    scanf("%s",&d[j].c[i]);
    printf("Enter first name\n");
    scanf("%s",&d[j].a[i]);
    printf("Enter middle name\n");
    scanf("%s",&d[j].b[i]);
    printf("Enter phone number\n");
    scanf("%d",&d[j].phone);
  }
  printf("\n Displaying after reconstructing details:\n");
  for(j=0;j<n;j++)
  {
    temp=strlen(d[j].c);
    printf("\n");
    for(i=0;i<=temp;i++) {
      printf("%c",d[j].c[i]);
    }
    printf(",");
    printf("%c",d[j].a[0]);
    printf(".");
    printf("%c",d[j].b[0]);
    printf(" %d",d[j].phone);
    }
}
