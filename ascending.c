#include<stdio.h>
int main()
{
    int i,j,n,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      for(i=0;i<n;i++)
      {
         for(j=1;j<n;j++)
         {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
         }
      }
      for(i=0;i<n;i++)
          printf("%d",arr[i]);

}
