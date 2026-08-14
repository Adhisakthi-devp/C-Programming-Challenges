#include <stdio.h>

void *myMemset(void *ptr, char value, int n)
{
    char *p = (char *)ptr;

    for(int i=0;i<n;i++)
    {
        p[i]=value;
    }

    return ptr;
}

void display(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    }

    printf("\n");
}

int main()
{
    char memory[20];

    printf("Before Memory Set:\n");
    display(memory,20);

    myMemset(memory,'A',20);

    printf("\nAfter Memory Set:\n");
    display(memory,20);

    return 0;
}