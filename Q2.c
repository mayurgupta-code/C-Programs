#include <stdio.h>

int main()
{
    int arr[50], f[50], size, i, j, count;

    printf(" Enter size of array (50 max.): ");
    scanf("%d", &size);

    printf(" Enter elements in array:- \n");
    for(i=0; i<size; i++)
    {
        printf(" Element %d : ",i+1);
        scanf("%d", &arr[i]);
        f[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                f[j] = 0;
            }
        }

        if(f[i] != 0)
        {
            f[i] = count;
        }
    }

    printf("\n");
    for(i=0; i<size; i++)
    {
        if(f[i] != 0)
        {
            printf(" %d appeared %d times\n", arr[i], f[i]);
        }
    }

    return 0;
}
