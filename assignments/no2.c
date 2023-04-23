/*
 * C Program to print Multiplication table using for loop
 */
 
/*
 *#include <stdio.h>
 
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n ", n);
    printf("--------------------------\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
*/

#include <stdio.h>
int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
