#include <stdio.h> #include<stdlib.h> struct Empl {
int Emp_id;
char Emp_name[100]; char Emp_city[100]; };
struct Empl emps[5];
void inputData(){
int i = 0;
for (i = 0; i<5; i++){
  printf("Enter the id:\n");
  scanf("%d", &emps[i].Emp_id);
  printf("Enter the name :\n");
  scanf("%s", &emps[i].Emp_name);
  printf("Enter the city :\n");
  scanf("%s", &emps[i].Emp_city);
  }
}
void printData(){
  int i = 0;
  for (i = 0; i<5; i++){
    printf("id : %d\n", emps[i].Emp_id);
    printf("name : %s\n", emps[i].Emp_name);
    printf("city : %s\n", emps[i].Emp_city);
}
}
void find_by_id(int id){
    int i;
  for (i=0; i<5; i++){
    if (emps[i].Emp_id == id){
    printf("id : %d\n", emps[i].Emp_id); printf("name : %s\n", emps[i].Emp_name); printf("city : %s\n", emps[i].Emp_city);
    }
  }
}
void sort_by_id(struct Empl emps[]){ struct Empl temp;
    int i, j;
    for (i = 0; i<5-1; i++){
      for (j =0 ; j<5-i; j++){
        if(emps[i].Emp_id < emps[i+1].Emp_id){
        temp = emps[i]; emps[i] = emps[i+1]; emps[i+1] = temp;
        }
      }
    }
}
int main() {
system("cls"); int ch; while(1)

{
  printf("\n\t\t*********************************************"); printf("\n\t\t* EMPLOYEE REGISTRATION SYSTEM *"); printf("\n\t\t*********************************************"); printf("\n");
  printf("\n\t\t\t[1]Add Employee Record "); printf("\n\t\t\t[2]Show employee Record "); printf("\n\t\t\t[3]Find Employee Record "); printf("\n\t\t\t[4]Sort employee Record "); printf("\n\t\t\t[5]Add more 5 employee Record "); printf("\n\t\t\t[6]Exit ");
  printf("\n\n\t\t\tPlease Enter Your Choice: "); fflush(stdin);
  scanf("%d",&ch); switch(ch)
{
case 1: inputData(); break;
case 2: printData(); break;
case 3: find_by_id(3); break;
case 4: sort_by_id(emps); break;
case 5:

inputData();
break;
case 6: printf("\n\n\t\t\t****T H A N K Y O U !!***"); printf("\n\t\t\t****PROGRAM TERMINATED***"); printf("\n\t\t\t****Made by - Jashwant ***");
break;
system("cls");
default : printf("Wrong!"); }
}
}
