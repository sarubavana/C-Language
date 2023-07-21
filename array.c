#include<stdio.h>
int main()
{
    int i,j,temp,n;
    scanf("%d",&n);
    int arr[n],b[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        b[i]=arr[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (b[i]==arr[j])
            {
                printf("%d",j);
            }
        }
    }
}
