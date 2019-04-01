#include<stdio.h>
void main()
{
   int arr[20],i,item,*p,n;
   printf("\n enter the no of elements to inut");
   scanf("%D" ,&n);
   printf("\n enter the array elements");
   for(i=0;i<n;i++)
   scanf("%d" ,&arr[i]);
   printf("\n enter the element to search");
   scanf("%d" ,&item);
   p=arr;
   for(i=0;i<n;i++)
   {
       if(item==*p)
           printf("\nfound");

       else
        printf("\n not found");
   }
}
