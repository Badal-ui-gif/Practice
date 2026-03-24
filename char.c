#include <stdio.h>
int main() {
char ch;
printf("Enter a character: ");
scanf("%c", &ch);
switch (ch)
{
case 'a':
    printf("You entered a vowel.");
    break;

default:
    break;
}
    return 0;
}