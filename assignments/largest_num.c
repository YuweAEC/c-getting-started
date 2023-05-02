#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,lar;

    printf("Enter 10 numbers\n");
    for(i=1; i<=10; i=i+1)
    {
        scanf("%d",&n);
        if(i==1)
        {
            lar=n;		// store the first number
        }
        else if(n>lar)		// compare the previous stored number with the latest entered number
        {
            lar=n;
        }
    }
    printf("Largest Number = %d",lar);
    return 0;
}

