#include<stdio.h>
int main()
{
    int i,j,n,space;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(space<j,space<i+1)
            {
                space++;
                printf(" ");
            }
            for(i=0;i<n;i++)
            {
                printf(" *");
            }


        }
    }

}
