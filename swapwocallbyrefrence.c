#include <stdio.h>

int main()
{
    int a, b, temp;
    int *num1 = &a;
    int *num2 = &b;

    printf("Enter the first number: ");
    scanf("%d", num1);

    printf("Enter the second number: ");
    scanf("%d", num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", *num1, *num2);

    temp = *num1;
    *num1 = *num2; // num2 = 5 and num1 = 10 then num1 = 5
    *num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", a, b);

    return 0;
}