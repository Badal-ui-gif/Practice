#include<stdio.h>
void fibonacchi(int n){
    int a = 0, b = 1, c;
    if (n == 0)
        printf("%d ", a);
    else if (n == 1)
        printf("%d ", b);
    else {
        printf("%d %d ", a, b);
        for (int i = 2; i < n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacchi(n);
    return 0;
}