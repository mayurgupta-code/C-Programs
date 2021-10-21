
#include<stdio.h>
int main(){
int arr[10][10][10],l,b,h;

printf("\n-----INSERTION-----\n");
printf(" Enter the size of 3D arry (l,b,h) (10 max.) : \n");
scanf("%d%d%d",&l,&b,&h);
if(l>10||b>10||h>10||l<0||b<0||h<0){
  printf("\n INVALLID DIMENSIONS");
return 0;
}
else{
printf("\n Enter Elements of Array : -\n");

for(int i=0 ; i<l ; ++i){ for(int j=0 ;j<b ; ++j)
  {
for(int k=0 ; k<h ; ++k){
printf(" Element (%d,%d,%d) : ",i+1,j+1,k+1);
scanf("%d",&arr[i][j][k]);
}
}
}
}
printf("\n-----DELETION-----\n");
int l1,b1,h1;
printf("\n Enter the index of 3D arry (l,b,h) to be deleted : ");
scanf("%d%d%d",&l1,&b1,&h1);

if(l1>l||b1>b||h1>h||l1<0||b1<0||h1<0)
{
  printf("\n INVALLID DIMENSIONS");
}
else{
printf("\n Element %d of Array is deleted.",arr[l1-1][b1-1][h1-1]);
arr[l1-1][b1-1][h1-1] = 0; }
printf("\n-----SEARCHING-----\n");
int x;
printf("\n Enter the element of 3D arry searched : "); scanf("%d",&x);
for(int i=0 ; i<l ; ++i){ for(int j=0 ;j<b ; ++j){
for(int k=0 ; k<h ; ++k){ if( x == arr[i][j][k]){
printf("\n Element %d Found at (%d,%d,%d)",x,i+1,j+1,k+1);
return 0;
}
}
 }
}
return 0;
}
