#include<stdio.h>
void main()
{
    int a;
    int arr[a];
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("element:");
    int b;
    scanf("%d",&b);
    int temp;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    low=0;high=a-1;mid=(high+low)/2;
    while(mid!=low || mid!=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==b)
        {
            printf("found");
            break;
        }
        else if(b<arr[mid])
        {
            low=0;
            high=mid;
        }
        else
        {
            low=mid+1;
            high=n-1;
        }
    }
}
