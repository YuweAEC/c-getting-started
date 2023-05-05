#include <stdio.h>

int main()
{
    float d, A;
    printf("Enter Distance Travelled: ");
    scanf("%f", &d);

    if (0 <= d && d <= 100)
    {
        A = (d * 13.25);
        printf("Amount charged :%f", A);
    }
    else
    {
        printf("Sorry Not getting the right amount.");
    }
}
