#include<stdio.h>
struct balance
{
int p;
char name[20], add[20];
float bal;

};
int main()
{
struct balance a[10];
int i;
float greatest;
for(i=0;i<10;i++)
{
printf("Enter the name, address and balance of the customer: ");
scanf("%s %s %f",a[i].name,a[i].add,&a[i].bal);
}
greatest = a[0].bal; // greatest = 1st customer balance and a[0] khali
for ( i = 0; i < 10; i++) // 10 customers 1st customer 0 to 9 a[0] = 1st customer
{
for (int j = i + 1; j < 10; j++) // 2nd customer 1 to 9 a[1] = 2nd customer
{if (a[i].bal < a[j].bal) // supposse a[0] = 100 and a[1] = 200 then 100 < 200
{
greatest = a[j].bal; // greatest = 200 and a[j] khali
a[j].bal = a[i].bal; // a[j] = 100 and a[i] khali
a[i].bal = greatest; // a[i] = 200 and greatest khali 
}
}
}
printf("The name of the customer with the greatest balance is: %s and the greatest balance is %d",a[0].name, a[0].bal);
}
