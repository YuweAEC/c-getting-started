#include<stdio.h>
void main()
{
    int m,n,i,j,large,small;
    printf ("Enter the no. of rows:\n");
    scanf("%d",&m);printf("Enter the no. of columns:\n");
    scanf("%d",&n);
    int matrix[m][n];
    // int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    //traversing 2D array

    for(i=0;i<m;i++)
}
 {
    for(j=0;j<n;j++)
    {
        printf("Enter values for : matrix[%d] [%d] \n",i+1,j+1);
        scanf("%d",&matrix[i][j]);
    }

 }


  printf("\n printing the elements ....\n");
  for(i=0;i<m;i++)
  {

        printf("\n");
        for (j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
         }
   }

