#include <stdio.h>
int main()
{
    int n,i,j;
    int arr[n][n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int r_min=1,r_max=n,c_min=1,c_max=n,count=1;
    while(r_min<=r_max)
        for(int i=r_min+1;i<=r_max;i++)
        {
             arr[c_max][i]=count++;
        }
        for(int i=c_max-1;i>=c_min;i--)
        {
            arr[i][r_max]=count++;
        }
        for(int i=r_max-1;i>=r_min+1;i--)
        {
            arr[r_min][i]=count++;

        }
        for(int i=c_min;i<=c_max;i++)
        {
             arr[r_min][i]=count++;
        }
        r_min++,r_max--,c_min++,c_max--;
        for (i=1;i<=n;i++)
        {
           for(j=1;j<n;j++)
           {
             printf("%d",arr[i][j]);
           }
         printf("\n");
        }

 }
