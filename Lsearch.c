#include<stdio.h>
int main()
{
    int arr[10],i,j=1;
    printf("\n enter the elments of the array");
    for( i=0;i<10;i++)
    {
    scanf("%d" ,&arr[i]);
    }

    for(i=0;i<10;i++)
    {
    printf("%d" ,arr[i]);
    }

    int key;
    printf("\n enter the no to be searched");
    scanf("%d" ,&key);

    for(i=0;i<10;i++)
    {
        if(key==arr[i])
        {
            j=0;

        }
    }
        if(j)
           printf("\n element not found");
        else
            printf("\n element is found " );

    return 0;
}

