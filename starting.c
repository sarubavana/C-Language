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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                int s=0;
                s=arr[j];
                arr[j]=arr[i];
                arr[i]=s;
            }
        }
    }
    printf("%d",arr[i]);
}
