#include<stdio.h>
int main()
{
    int i,j,n,lar=0,sec=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
             scanf("%d",&arr[i]);
            }
            if(i<j)
            {
                i+1;
                arr[i]=lar;
                sec=arr[i];
            }
            else if(lar<arr[i]&sec>arr[i])
            {
                sec<=lar;
            }
            printf("%d",lar);
        }
}

