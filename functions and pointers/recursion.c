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

void factorial(int x);
{
    int f=1,i;

    for(i=x;i>=1;i--)
        f=f*i;

    return (f);
}