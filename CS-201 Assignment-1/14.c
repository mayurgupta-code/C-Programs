
#include<stdio.h> int main()
{

int m,n,a[10][10],i,j,count = 0;
printf("Enter the order of the matrix i.e, rows and columns:\n");
scanf("%d%d",&m,&n);
printf("\nEnter the elements of the matrix:\n");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nMatrix entered by you is:\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++) {
printf("%d\t",a[i][j]);
}
} for(i=0;i<m;i++) {
  for(j=0;j<n;j++)
  {
if(a[i][j] == 0) { count++;
}
}
}
if(count > ((m*n)/2))
printf("Given matrix is a sparse matrix");
else
printf("Given matrix is not a sparse matrix");
return 0;
}
