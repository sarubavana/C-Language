#include <stdio.h>
int main()
{
    int a,i,n;
    scanf("%d",&a);
    int low =0;
    int high=a-1;
    int mid=(low+high)/2;
    int arr[a];
    {
        scanf("%d",&arr[i]);
    }
    int search;
    {
        scanf("%d",&search);
    }
    for(i=0;i<a;i++)
    {
     if(search==arr[mid])
     {
         printf("%d",arr[mid]);
     {
         if(search<arr[mid])
         {
             low = 0;
             high = mid;
         }
         else
         {
             low=mid+1;
             high=n-1;
         }
     }
   }
}
