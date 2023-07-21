#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int posi;
    scanf("%d",&posi);
    posi--;
    for(i=posi;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d",arr[i]);
    }
}
