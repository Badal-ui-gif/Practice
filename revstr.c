#include<stdio.h>
int main(){
    char str[100], rev[100];
    int count=0, j=0,i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from user input
    for ( i = 0; str[i] != '\0'; i++) // Loop to count the number of characters in the string
    {
        count++;
    }
    

    for(int i = count-1;i>=0; i--){ // Loop to reverse the string
             
  
        printf("%c", str[i]); // Print characters in reverse order
    
    }

    return 0;
}