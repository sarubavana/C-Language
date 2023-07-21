#include <stdio.h>
#define maxsize 6
int arr[maxsize];
int create()
{
    int arr[maxsize];
    printf("enter the array");
    for(i=0;i<maxsize;i++)
    {
        scanf("%d",&arr[i]);
    }
  return 0;
}
 void insert()
 {
     int n;
     scanf("%d",&n);
     int arr[n];
     printf("enter the element\n");
     int posi;
     scanf("%d",&posi);
     for(int i=n-1;i>=posi-1;i++)
     {
         arr[i+1]=arr[i];
         arr[pos-1]=res;
     }
      for(i=0;i<n;i++)
      {
          printf("%d",arr[i])
      }

 }
void display()
 {
    create()
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 }
    printf("1.create an array \n 2.enter an array\n 3.display an array 4.delete an element 5.search an array 6.exit the array");
    int choice;
    printf("Enter the choice");
    scanf("%d",&choice);
    switch(n)
    {
        case 1: create();
                break;
        case 2: insert();
                break;
        case 3: display();
                break;
        case 4: search();
                break;
        case 5:
                break;
        case 6:
                default;
    }
}
