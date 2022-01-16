  #include<stdio.h>
//#define index 0

// STRUCTURE

struct Employee
{
    int Emp_id;
    char Emp_name[25],Emp_city[25];
} List[15];

//int index = 0;

// Adding 5 Emproyee

void Employee_5()
{   int index = 0;
    int end = index+5;

    for(index=0; index<end ; index = index + 1)
    {
        printf(" \nEnter Employee Name : ");
        scanf("%s",List[index].Emp_name);
        printf(" \nEnter Employee ID : ");
        scanf("%d",&List[index].Emp_id);
        printf(" \nEnter Employee City : ");
        scanf("%s",List[index].Emp_city);
    }
}

// Search Employee

void Search_emp_by_id(int x)
{
    int end = index;
    for(int i=0 ; i<index ; ++i)
    {
        if(x == List[i].Emp_id)
        {
            printf(" -----FOUND EMPLOYEE-----");
            printf(" \nEmployee Name : %s",List[i].Emp_name);
            printf(" \nEmployee ID : %d",List[i].Emp_id);
            printf(" \nEmployee City : %s",List[i].Emp_city);
            return;
        }
    }

    printf("\n Employee NOT FOUND!! ");
}

// Sorting

void Sort_Emp()
{
    int i, j,n = index;
    struct Employee temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (List[j].Emp_id > List[j+1].Emp_id)
            {
                temp = List[j];
                List[j] = List[j+1];
                List[j+1] = temp;
            }
        }
    }
}

// Counting no. of Employee

void Employee_count()
{
    printf("\n Number of Employees are : %d ",index);
}

// Printing Employee

void Display_Emp()
{
    printf("\n ----EMPLOYEE LIST -----");
    for(int i=0 ; i<index ; ++i)
    {
        printf("\n");
        printf(" \nEmployee Name : %s",List[i].Emp_name);
        printf(" \nEmployee ID : %d",List[i].Emp_id);
        printf(" \nEmployee City : %s",List[i].Emp_city);
    }
}



int main()
{
    //int index = 0;

    printf(" Enter Employee data of 5 Employees : - \n");
    Employee_5();

    Display_Emp();

    printf("\n----SORTING----");
    Sort_Emp();
    Display_Emp();

    printf("\n----COUNTING----");
    Employee_count();
    Display_Emp();

    printf("\n --- SEARCH EMPLOYEE BY ID----- \n");
    int x;
    printf("Enter ID : ");
    scanf("%d",&x);
    Search_emp_by_id(x);

    printf("\n----ADDIND REST 5 EMPLOYEE----");
    Employee_5();
    Display_Emp();

    return 0;
}
