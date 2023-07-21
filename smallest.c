#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int s=0;
                s=arr[i];
                arr[i]=arr[j];
                arr[j]=s;
            }
        }
    }
    printf("%d",arr[0]);
}

