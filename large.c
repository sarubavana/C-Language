#include<stdio.h>
int main()
{
    int i,n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]<max)
        max=arr[i];
    }
    printf("%d",max);
}
