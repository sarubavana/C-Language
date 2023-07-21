#include<stdio.h>
void main()
{
    int n,i,j,sub;
    int s=0,s1=0;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the n:");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        s=s+i;
        s1=n*(n+1)/2;
        sub=s1-s;

    }
