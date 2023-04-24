#include<stdio.h>

void main()
{
    int i, j, k, l, n;
    printf("Enter the no. of rows:\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(k=n;k>=i;k--)
        {
            printf(" ");

        }
        
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
    printf("\n")
    }

}
