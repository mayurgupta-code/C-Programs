#include<stdio.h>

// Structure

struct Customer
{
    char name[30];
    long long phn;
} List[5];

int main()
{

    printf(" Enter names and telephone numbers : - \n");
    for(int i=0 ; i<5 ; ++i)
    {
        scanf("%[^\n]s",List[i].name);
        scanf("%ld",&List[i].phn);
        while ((getchar()) != '\n');
    }

    printf("\n Customer list  : - \n");
    for(int i=0,j ; i<5 ; ++i)
    {
        j=0;

        while(List[i].name[j] != ' ')
        {
            printf("%c",List[i].name[j]);
            ++j;
        }

        printf(",");

        while(List[i].name[j] != '\0')
        {
            if(List[i].name[j] == ' ')
            {
                printf("%c.",List[i].name[j+1]);
            }
            ++j;
        }

        printf(" %lld",List[i].phn);
        printf("\n");
    }

    return 0;
}
