#include<stdio.h>
#define maxsize 10
int arr[maxsize],a;
int create()
{
        printf("Enter the size: \n");
        scanf("%d",&a);
        printf("Enter the array: \n");
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
    return 0;
}
void insert()
{
    create();
    int element;
    printf("Enter the element \n");
    scanf("%d",&element);
    int position;
    scanf("%d",&position);
    for(int i=a;i>=position-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=element;
    for(int i=0;i<a+1;i++)
    {
        printf("%d",arr[i]);
    }
}
void display()
{
    create();
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}
int search()
{
    create();
    printf("Enter search element:\n");
    int element,count=0;
    scanf("%d",&element);
    for(int i=0;i<a;i++)
    {
        if(arr[i]==element)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("Found");
    }
    else{
        printf("Not Found");
    }
}
int dele()

}
    create();
}
    {
        printf("%d",arr[i]);
    }
        if(a[i]==n)
        {
            for(i=0;j<(a-1);i++)
            {
                a[i]=a[i+1];
            }
            break;
        }
    }
}
void main()
{
    printf("1. Create an Array \n 2. Insert an array \n 3. Display an array \n 4. Delete an element \n 5. Search an element \n 6. Exit \n 7.Invalid choice \n ");
    int choice;
    printf("Enter a choice: \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: create();
                break;
        case 2: insert();
                break;
        case 3: display();
                break;
        case 4: dele();
                break;
        case 5: search();
                break;
        case 6:printf("Exit");
                break;

    }
}

