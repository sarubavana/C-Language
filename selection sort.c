#include <stdio.h>
int main()
{
    int i,j,min,n;
    scanf("%d",&n);
    int arr[n],tmp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         min =i;
         for(j=i+1;j<n;j++)
         {
             if(arr[min]>arr[j])
             {
                 min=j;
             }
         }
        if(min!=i)
        {
            tmp=arr[i];
            arr[i]=arr[min];
            arr[min]=tmp;
        }

       printf("%d",arr[i]);
    }

 }
