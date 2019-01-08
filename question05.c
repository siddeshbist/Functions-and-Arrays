//Siddesh Bist
//400072076
//L07
//Q5

#include <stdio.h>

void string_copy(const char source[], char destination[], int n);

int main(void)
{
    int i;
    char source[] = "Siddesh", destination[7];
    string_copy(source, destination, 7);
    for(i=0;i<7;i++)
    {
        printf("%c", destination[i]);
    }
    printf("\n");
    return 0;
}

void string_copy(const char source[], char destination[], int n)
{
    int i;
    for(i=0;i<n-1;i++)  /*store as much characters as possible with the range of destination but leave one position for the null manually*/
    {
        destination[i] = source[i];
    }
    destination[n-1] = 0;  /*set the last character to be null to make the array into a string*/
}


