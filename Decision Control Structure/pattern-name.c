#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int i, j, n;
    char name[50];
    int len;

    printf("Enter your name: ");
    gets(name);
    printf("Enter no of rows: ");
    scanf("%d", &n);
    
    len = strlen(name);
    // Print upper part of the heart shape with stars

    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

      printf("
      ");
    }

    // Prints lower triangular part with stars

    for (i = n; i >= 1; i--)
    {
      for (j = i; j < n; j++)
      {
            printf(" ");
      }

    // Print the name on screen

      if (i == n)
      {
            for (j = 1; j <= (n * 2 - len) / 2; j++)
            {
                printf("*");
            }

            printf("%s", name);

            for (j = 1; j < (n * 2 - len) / 2; j++)
            {
                printf("*");
            }
      }
      else
      {
            for (j = 1; j <= (i * 2) - 1; j++)
            {
                printf("*");
            }
      }
      
      printf("
      ");
    }
    return 0;
}

