#include<stdio.h>

int main()
{
    FILE *fptr;
    char name[20];
    int n, i, marks;

    fptr = fopen("student.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", name, &marks);
        fprintf(fptr, "%s\t%d\n", name, marks);
    }

    fclose(fptr);

    // Reading from file
    fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Skip header line


    printf("\nName\tMarks\n");

    while (fscanf(fptr, "%s %d", name, &marks) == 2)
    {
        printf("%s\t%d\n", name, marks);
    }

    fclose(fptr);

    return 0;
}