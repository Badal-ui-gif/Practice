#include<stdio.h>

/* library functions are those functions which are already defined in the header files and we can use them by including the header files in our program. For example, printf() is a library function defined i
in stdio.h header file. We can use it to print output on the console.
 scanf()
 printf()
 string.h
 strcmp()
 strrev()
 strlen()
 strcpy()
 strcat()
 */
int main()
{
    int p,r,t;
    float si;
    printf("Enter the principal, rate of interest and time: ");
    scanf("%d %d %d", &p, &r, &t);
    si = (p * r * t) / 100.0;
    printf("Simple Interest = %.2f", si);
}