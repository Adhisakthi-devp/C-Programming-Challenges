#include <stdio.h>
#include <stdlib.h>

void displayMemory(int *arr, int n)
{
    printf("\n====== MEMORY MAP =====\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            printf("[ ]");
        else
            printf("[X]");
        if ((i + 1) % 16 == 0)
            printf("\n");
    }
    if (n % 16 != 0)
        printf("\n");
    printf("\n[ ] = Free    [x] = Allocated\n");

    // Display memory statistics
    int freeBlocks = 0;
    int allocatedBlocks = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
            freeBlocks++;
        else
            allocatedBlocks++;
    }
    printf("Total Blocks     : %d\n", n);
    printf("Allocated Blocks : %d\n", allocatedBlocks);
    printf("Free Blocks      : %d\n", freeBlocks);

}




void memoryAllocate(int *arr, int n, int size){
    if (size <= 0){
        printf("Invalid memory size.\n");
        return;
    }
    if (size > n){
        printf("Requested memory is larger than total memory.\n");
        return;
    }
    int count = 0;
    int start = -1;
    // First Fit
    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            if (count == 0)
                start = i;
            count++;
            // Required number of consecutive blocks found
            if (count == size){
                for (int j = start; j < start + size; j++){
                    arr[j] = 1;
                }

                printf("\nAllocation successful!\n");
                printf("Allocated blocks: %d to %d\n",
                       start, start + size - 1);
                return;
            }
        }
        else
        {
            // Consecutive free block sequence broken
            count = 0;
            start = -1;
        }
    }

    printf("\nMemory Not Available.\n");
    printf("No %d consecutive free blocks found.\n", size);
}


void freeUpSpace(int *arr, int n, int from, int to)
{
    if (from < 0 || to >= n || from > to)
    {
        printf("Invalid range.\n");
        return;
    }
    int freed = 0;
    for (int i = from; i <= to; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
            freed++;
        }
    }
    printf("\nMemory from %d to %d cleared.\n", from, to);
    printf("Blocks actually freed: %d\n", freed);
}
int main()
{
    int n;
    printf("Enter total memory size: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("Invalid memory size.\n");
        return 1;
    }
    // Dynamic memory allocation
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    int choice;
    while (1){
        printf("\n\n\tMEMORY MANAGEMENT\t\n");
        printf("1. Allocate Memory\n");
        printf("2. Free Memory\n");
        printf("3. Display Memory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
            {
                int size;

                printf("Enter memory size to allocate: ");
                scanf("%d", &size);

                memoryAllocate(arr, n, size);

                displayMemory(arr, n);

                break;
            }
            case 2:
            {
                int from, to;
                printf("Enter range to free:\n");
                printf("From: ");
                scanf("%d", &from);
                printf("To: ");
                scanf("%d", &to);
                freeUpSpace(arr, n, from, to);
                displayMemory(arr, n);
                break;
            }
            case 3:{
                displayMemory(arr, n);
                break;
            }
            case 4:{
                free(arr);

                printf("Program terminated.\n");

                return 0;
            }
            default:
            {
                printf("Invalid choice.\n");
            }
        }
    }
    return 0;
}