#include<stdio.h>
#include<conio.h>
/*
void main(){

    int num;

    printf("/nEnter a number less than 10:");
    scanf("%d", &num);

    if (num<=10)
    {
        printf("/nWhat an obideant servant you are !");
    }

    else
    printf("/nStay follow the rules");

}

*/

int main()
{
    int x= 5, y;
    
    y= (x==4 ? 24 : 32);

    printf("\n address of x = %d", &x);
    printf("\n address of y = %d", &y);

    printf("\n Value of x = %d", *(&x));
    printf("\n Value of y = %d", *(&y));
}

// int x = 6;
// int y = (x == 5 ? 5 : 10);


