#include<stdio.h>
int main()
{
    int i,j,n,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i]);
        }
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        else
        {
           printf("%d",temp);
        }
    }
}
