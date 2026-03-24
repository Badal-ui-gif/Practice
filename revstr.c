#include<stdio.h>
int main(){
    char str[100], rev[100];
    int count=0, j=0,i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from user input
    for ( i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    
    // Reverse the string
    for(int i = count-1;i>=0; i--){ // Find the length of the string APPLE\0 0 1 2 3 4 5                      // Move back to the last character (before null terminator)
             
  
        printf("%c", str[i]); // Print characters in reverse order
    
    }

    return 0;
}