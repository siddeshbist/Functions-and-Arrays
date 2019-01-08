//Siddesh Bist
//400072076
//L07
//Q3

#include <stdio.h>

#define N 4

void print_in_diagonal(int a[][N]);

int main(void)
{
    int a[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    print_in_diagonal(a);
    printf("\n");
    return 0;
}

void print_in_diagonal(int a[][N])
{
    int i,j,k;
    for(i=0;i<N;i++)   /*start from the numbers on the first row*/
    {
      k = i;           /*store the number of position into a variable*/
      for(j=0;k>=0;j++)        /*select the numbers on the same diagonal*/
      {
        printf("%d ",a[k][j]); /*print the numbers in one diagonal from lower left to uppper right*/
        k--;
      }
    }
    for(j=1;j<N;j++)   /*print the rest numbers on the right side of the main diagonal*/
    {
        k = j;
        for(i=N-1;k<N;i--)
        {
            printf("%d ",a[i][k]);
            k++;
        }
    }
}
