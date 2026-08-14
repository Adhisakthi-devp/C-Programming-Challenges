#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student *s = NULL;
    int n = 0;
    int choice;
    int i, j;

    while (1)
    {
        printf("\n1. Add Record");
        printf("\n2. Update Record");
        printf("\n3. Delete Record");
        printf("\n4. Search Record");
        printf("\n5. Display Records");
        printf("\n6. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        
        if (choice == 1)//add record
        {
            n++;
            s = malloc(s, n * sizeof(struct Student));
            printf("Enter ID : ");
            scanf("%d", &s[n - 1].id);
            printf("Enter Name : ");
            scanf("%s", s[n - 1].name);
            printf("Enter Marks : ");
            scanf("%f", &s[n - 1].marks);
            printf("Record Added\n");
        }
        else if (choice == 2)//update record
        {
            int id, found = 0;
            printf("Enter ID to update : ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("Enter New Name : ");
                    scanf("%s", s[i].name);
                    printf("Enter New Marks : ");
                    scanf("%f", &s[i].marks);
                    found = 1;
                    printf("Record Updated\n");
                    break;
                }
            }
            if (found == 0)
                printf("Record Not Found\n");
        }

        else if (choice == 3)//deleting record
        {
            int id, found = 0;
            printf("Enter ID to delete : ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    for (j = i; j < n - 1; j++){
                        s[j] = s[j + 1];
                    }
                    n--;
                    s = realloc(s, n * sizeof(struct Student));
                    found = 1;
                    printf("Record Deleted\n");
                    break;
                }
            }
            if (found == 0)
                printf("Record Not Found\n");
        }
        else if (choice == 4)//searching for record
        {
            int id, found = 0;
            printf("Enter ID to search : ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("\nID    : %d", s[i].id);
                    printf("\nName  : %s", s[i].name);
                    printf("\nMarks : %.2f\n", s[i].marks);

                    found = 1;
                    break;
                }
            }
            if (found == 0)
                printf("Record Not Found\n");
        }
        else if (choice == 5)//display record
        {
            if (n == 0)
            {
                printf("No Records Available\n");
            }
            else
            {
                printf("\nStudent Records\n");
                for (i = 0; i < n; i++) {
                    printf("\nStudent %d", i + 1);
                    printf("\nID    : %d", s[i].id);
                    printf("\nName  : %s", s[i].name);
                    printf("\nMarks : %.2f\n", s[i].marks);
                }
            }
        }
        else if (choice == 6)//ending program
        {
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}