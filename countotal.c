#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
             count+=1;
             break;
            }
        }
    }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                break;
            }
        }
    }

}
