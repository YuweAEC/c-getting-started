#include<stdio.h>
#include<conio.h>

int factorial(int);

void main()
{
    int a, fact;

    printf("\n Enter a number:");
    scanf("%d", &a);

    fact = factorial(a);
    printf("factorial value =%d", fact);
}

int factorial(int x)
{
    int f=1,i;

    for(i=x;i>=1;i--)
        f=f*i;

    return (f);
}
