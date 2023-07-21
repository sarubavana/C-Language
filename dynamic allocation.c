#include<stdio.h>
int main()
{
    int w=10;
    int *p,*q;
    p = &w;
    q = p;
    printf("%d %d",*p, *q);
}
