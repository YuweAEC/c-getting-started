#include<stdio.h>

void factorial(int);

void main()
{
    int a, fact;

    printf("\n Enter a number:");
    scanf("%d", &a);

    fact = factorial(a);
    printf("factorial value =%d", fact);
}
