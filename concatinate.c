#include<stdio.h>
#include<string.h>
 
int main()
{
    char org[100];
    char cat[100];
    printf("Enter the first string: ");
    fgets(org,sizeof(org),stdin);
    printf("Enter the second string: ");
    fgets(cat,sizeof(cat),stdin);
    printf("Concatenated string: %s",strcat(org,cat));

    return 0;
}