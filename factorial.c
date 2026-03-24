#include<stdio.h>
int factorial(int n){
    int i;
    int fact = 1;
    if (n==0)
    return 1;
    for( i = 1; i <= n; i++){
    fact = fact * i;}
    printf("Factorial of %d is %d", n, fact);
}
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
factorial(n);
return 0;
}
