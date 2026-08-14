#include <stdio.h>

int search(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }

    return -1;
}

void insertSorted(int arr[], int *n, int key)
{
    int i=*n-1;

    while(i>=0 && arr[i]>key)
    {
        arr[i+1]=arr[i];
        i--;
    }

    arr[i+1]=key;
    (*n)++;
}

void display(int arr[], int n)
{
    printf("\nEmployee IDs:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[100];
    int n,key,pos;

    printf("Enter Number of Employee IDs : ");
    scanf("%d",&n);

    printf("Enter Employee IDs in Sorted Order:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Employee ID to Search : ");
    scanf("%d",&key);

    pos=search(arr,n,key);

    if(pos!=-1)
    {
        printf("\nEmployee ID Found at Position %d\n",pos);
    }
    else
    {
        printf("\nEmployee ID Not Found\n");
        printf("Inserting into Correct Position...\n");

        insertSorted(arr,&n,key);

        display(arr,n);
    }

    return 0;
}