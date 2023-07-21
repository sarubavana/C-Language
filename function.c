#include<stdio.h>
int oddeven(int n,int i)
{
    if(i<n)
        return;
    {
        if(i%2==1)
        printf("%d",i+1);
        if(i%2==0)
        printf("%d",i-1);
    }
    oddeven(n,i+1);
}
int main()
{
int n,i;
printf("enter the no:");
scanf("%d",&n);
oddeven(n,1);
}
