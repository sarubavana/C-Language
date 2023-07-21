#include <stdio.h>
int main()
{

    int i,j,n,space;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-1;space++)
        {
            printf(" ");
        }
        for(j=0;j<=n;j++)
        {
            while(j!=2*i-1)
            printf("*");
            break;
        }
       printf("\n");
    }
}
