#include<stdio.h>
#include<conio.h>

int main()
{
    int avg, sum = 0;
    int i;
    int marks[8]; /* array declaration */
    for (i = 0; i <= 7; i++)
    {
        printf("\nEnter marks ");
        scanf("%d", &marks[i]); /* store data in array */
    }
    for (i = 0; i <= 7; i++)
        sum = sum + marks[i]; /* read data from an array*/
    avg = sum / 8;
    printf("\nAverage marks = %d", avg);
}
