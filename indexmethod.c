#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s[10];
    int i, maxIndex = 0;

    // Input
    for(i = 0; i < 10; i++)
    {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find student with highest marks
    for(i = 1; i < 10; i++)
    {
        if(s[i].marks > s[maxIndex].marks) // max index ma 10 ani i[1] ma 20
        {
            maxIndex = i;
        }
    }

    // Output
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}