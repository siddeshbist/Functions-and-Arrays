//Siddesh Bist
//400072076
//L07
//Q2

#include <stdio.h>
#include <math.h>

#define N 4 /*replace all values of N by 4*/
int is_diag_dom( int mat[ ][N]);

int main(void)
{
    int a[][4]={{9,1,1,1,},{1,10,1,1,},{1,1,10,10,},{1,1,1,10}};/* declare array and its elements */
    is_diag_dom(a);

}

int is_diag_dom( int mat[ ][N])
{
    int i,j,flag = 1,sum=0;      /*initialize the flag to 1*/
    for(i=0;i<N;i++)           /*start from the numbers in the first row*/
    {
        for(j=0;j<N;j++)    /*select all the numbers at the corresponding column which have the different position number from the corresponding row number*/
        {
            sum += fabs(mat[i][j]);    /*sum up all the numbers in this row excluded the number on the diagonal*/
        }
        sum=sum-fabs(mat[i][i]);    /*subtract the sum of the diagonal element*/
        if( fabs(mat[i][i]) <= sum)
        {
            flag = 0; /*if sum is smaller than the number on the diagonal, set the flag to 0*/
        }
        sum = 0;/*if the statement does not run then flag*/

    }
    printf("%d",flag);
    return flag;
}
