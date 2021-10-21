#include<stdio.h>


struct employee
{
  int emp_id;
  char emp_name[20], emp_city[20];
}emp[10];

void add_employee();
void view_employee();

void add_employee(){
  int index;
  for (index=0; index<2; index++){
    printf(" \nEnter Employee Name : ");
    scanf("%s",emp[index].emp_name );

    printf(" \nEnter Employee ID : ");
    scanf("%d",&emp[index].emp_id);

    printf(" \nEnter Employee City : ");
    scanf("%s",emp[index].emp_city);

  }
}

void view_employee(){
  int i;
  for(i=0; i<2; i++){
    printf("\n");
    printf(" \nEmployee Name : %s",emp[i].emp_name);
    printf(" \nEmployee ID : %d",emp[i].emp_id);
    printf(" \nEmployee City : %s",emp[i].emp_city);
  }
}

int main(){
  printf(" Enter Employee data of 5 Employees : - \n");
  add_employee();
  view_employee();

  return 0;

}
