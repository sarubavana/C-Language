#include <stdio.h>
#include <math.h>
int main ()
{
    int n,b,i;
    printf(" Enter the valu ");
    scanf("%d",&n);
    int arr[n];
    printf (" Enter the power ");
    scanf (" %d", &b);
    int res=1;
    for(int i=0;i<b;i++)
    {
        res=res*n;
    }
    printf("%d",res);
}
