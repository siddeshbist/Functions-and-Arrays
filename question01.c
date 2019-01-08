//Siddesh Bist
//400072076
//L07
//Q1

#include <stdio.h>
#include <math.h>
void print_vector(double array[], int size);

//int main(void)
//{
//     double a[5]={1.0, 2.3, 4.6, 6.8, 9.5};
//     print_vector(a, 5);
//     return 0;
//}

void print_vector(double array[], int size)
{
    int i;
    for(i=0;i<size;i++)     /* use for loop to print all the floats in the array one by one*/
    {
        printf("%f,",array[i]);
    }
    printf("\n");
}

void add_vectors( double vector1[], double vector2[], double vector3[], int n)
{
    int i; double a;
    for(i=0;i<n;i++)     /*use for loop to add the numbers at the same position in two arrays and store the sum into the third array one by one */
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}




/*
int main(void)
 {
     double a[5]={1.0, 2.0, 3.0, 4.0, 5.0}, b[5]={1.1, 1.1, 1.1, 1.1, 1.1}, c[5];
     add_vectors(a, b, c, 5);
     print_vector(c, 5);
     return 0;
 }
*/
double scalar_prod(double vector1[], double vector2[], int n)
{
    int i; double sum=0;
    for(i=0;i<n;i++)    /*use for loop to multiply two numbers at the same position from two arrays and add up all the products*/
    {
        sum += vector1[i] * vector2[i];
    }
    return sum;
}

//int main(void)
//{
//    double a[5]={1.0, 2.0, 3.0, 4.0, 5.0}, b[5]={1.1, 1.1, 1.1, 1.1, 1.1}, sum;
//    sum = scalar_prod(a, b, 5);
//    printf("%f\n",sum);
//    return 0;
//}

 double norm2(double vector[], int n)
 {
     double Sum;
     Sum = sqrt(scalar_prod(vector, vector, n));    /*calculate the square root of the sum of the products of two same arrays */
     return Sum;
 }

 int main(void)
 {
     double a[5]={1.0, 1.0, 1.0, 1.0, 1.0}, Sum;
     Sum = norm2(a, 5);
     printf("%f\n",Sum);
     return 0;
 }