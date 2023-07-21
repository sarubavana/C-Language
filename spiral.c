#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i;j<n-1;j++)
            arr[i][j]=count++;
        for(j=i+1;j<=n-i-1;j++)
            arr[n-i-1][j]=count++;
        for(j=n-i-2;j>=i;j--)
            arr[n-i-1][j]=count++;
        for(j=n-2-i;j>i;j--)
            arr[j][i]=count++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]<10)
        }
}

