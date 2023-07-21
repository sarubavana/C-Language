#include<stdio.h>
int main()
{
    int i,n;
    printf("elem\n");
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele,posi;
    scanf("%d",&ele);
    printf("posi\n");
    scanf("%d",&posi);
    for(i=n-1;i>=pos-1;i--)
    {
      arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    for(i=0;i<n+1;i++)
    {
        printf("%d",arr[i]);
    }
    printf("/n");
}
