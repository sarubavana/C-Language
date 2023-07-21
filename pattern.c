#include<stdio.h>
int main()
{
    int i,j,n,col=n-1,row=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(col=j;j<n;j++)
            arr[i][j]=n;
            for(row=n-1;j<n;j++)
            arr[i][j]=n;
            for(col=i+1;i<n-1;i--)
            arr[i][j]=n;
            for(row=j-1;j<n-1;j--)
            arr[i][j]=n;
        }
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i][j]);
        }
    }
}

