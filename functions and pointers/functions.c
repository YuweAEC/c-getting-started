#include<stdio.h>
#include<conio.h>

int addnumseq(int a)
{
    int b;
    b=a+1;
    printf("%d",a+b);
    return(a+b);
}
int main()
{
    for(i=10;i=<20;i=i+1)
    {
        x= addnumseq(i);
        printf("%d",x);
    }
    return 0;
}


