#include<stdio.h>

void main()
{
    int i;
    printf("enter the value:");
    scanf("%d",&i);
    switch(i)
            {
        case 1:
            {
                printf("light");
                break;
            }
        case 2:
            {
                printf("fan");
                break;
            }
         case 3:
            {
                printf("AC");
                break;
            }
        defualt:printf("invalid value");
    }
    
}
 
