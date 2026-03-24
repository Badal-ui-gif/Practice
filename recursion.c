#include<stdio.h>
int rec(int n)
{
    if(n==0)
    return 1;
    else
    return n*rec(n-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, rec(n));
    return 0;
}