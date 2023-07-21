#include<stdio.h>
void main()
{
    int a,b,i,j;
    printf("enter array1 size:")
    scanf("%d",&a);
    int arr1[a];
    for(i=0;i<a;i++)
    {
      scanf("%d",&arr1[i]);
    }
    printf("enter array2/n:");
    scanf("%d",&b);
    int arr2[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=a;i<a+b;i++)
        {
            arr1[i]=arr2[j];
            j++;
        }
    }



