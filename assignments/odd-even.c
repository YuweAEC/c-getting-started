/**
 * C program to check Even or Odd number using switch case
 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number to check even/odd: ");
    scanf("%d", &num);

    switch(num % 2)
    {
        case 0: 
        printf("Number is Even");
        break;
        case 1: 
        printf("Number is Odd");
        break;
    }

    return 0;
}
