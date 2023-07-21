#include<stdio.h>
void main()
{
    int n,i,j;
    int arr[n];
    scanf("%d",&n);
    printf("enter the n",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("&");
        }
        printf("\n");
    }
}
