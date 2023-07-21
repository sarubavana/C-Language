#include<stdio.h>
int main()
{
    int n;
    int pow=1;
    scanf("%d",&n);
    while(n!=0)
    {
        int t=0,k;
        scanf("%d",&t);
        scanf("%d",&k);
        if(k%t!=0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    n--;
}
