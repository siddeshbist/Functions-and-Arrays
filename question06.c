//Siddesh Bist
//400072076
//L07
//Q6

#include <stdio.h>

void efficient( const int source[], int val[], int pos[], int size);
void reconstruct( int source[], int m, const int val[], const int pos[], int n);

int main(void)
{
    int source[9] = {0,0,0, 23, 0, -7, 0, 0, 48}, val[3], pos[3], i;
    efficient(source, val, pos, 9);
    printf("val\n");
    for(i=0;i<3;i++)
    {
        printf("%d ", val[i]);
    }
    printf("\npos\n");
     for(i=0;i<3;i++)
    {
        printf("%d ", pos[i]);
    }
    int nsource[9]={};
    int val1[3]={23,-7,48};
    int pos1[3]={3,5,8};
    reconstruct(nsource,9,val1,pos1,3);
    printf("\nThe array is:");
    for(i=0;i<9;i++)
    {
       printf("%d,", nsource[i]);
    }


    return 0;
}


void efficient( const int source[], int val[], int pos[], int size)
{
    int i, k=0;
    for(i=0;i<size;i++) /*stopping condition of i is less than size because array index starts from zero*/
    {
        if(source[i] != 0)     /*checks for integers that are not 0*/
        {
            val[k] = source[i];  /*the value of the non zero integer is stored in val*/
            pos[k] = i;          /*store the corresponding position number into pos*/
            k++;
        }
    }
}

void reconstruct( int source[], int m, const int val[], const int pos[], int n)
{
    int i, j;
    for(i=0;i<m;i++) /*array indexed at 0 and m represents size of array*/
    {
        source[i] = 0;    /*set all the integer in source array to be 0*/
    }
    for(j=0;j<n;j++)
    {
        source[ pos[j] ] = val[j];    /*replace the 0 at the position recorded in pos array with the corresponding value stored in val*/
    }
}


