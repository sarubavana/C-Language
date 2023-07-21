#include <stdio.h>
int main()
{
  int n,temp,i,j,a;
  scanf("%d",&n);
  printf("enter the n",n);
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=[j];
              a[j]=temp;
          }
      }

  }
