#include<stdio.h>

int main()
{
    float d,A;
    printf("Enter Distance Travelled: ");
    scanf("%f",&d);
    
    if(0<=d && d<=100)
    {
        A=(d*13.25);
        printf("Amount charged :%f", A);
    }
    else
    {
        printf("Not getting the right amount:");
    }

}
 
 
// void main()
// {
//     int num;

//     printf("Enter a number less than 10");
//     scanf("%d", &num);

//     if (num<=10)
//     printf("What an obideant servant you are !");
// }

