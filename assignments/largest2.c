#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n;

    printf("Enter a number ");
    scanf("%d",&n);
    printf("Factors are\n");
    for(i=1; i<=n; i=i+1)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}