//Siddesh Bist
//400072076
//L07
//Q4

#include <stdio.h>
#include <stdlib.h>

void letter_freq(const char word[],int freq[]);

int main()
{
    char sample[] = "Welcome";
    int freq[26]= {0};
    letter_freq(sample,freq);
    return 0;
}

void letter_freq(const char word[],int freq[])
{
    int i=0,j,k;
    while(word[i]!=0)
    {
        if(word[i]>= 65 && word[i] <= 90)/* range of uppercase letters*/
        {
            k = word[i] - 'A'; /*finds the corresponding index in the array*/
            freq[k] +=1;
        }
        else if(word[i]>=97 && word[i]<=122)
        {
            k = word[i] - 'a'; /*finds the corresponding index in the array*/
            freq[k]+=1;
        }
        i++;
    }
    char uppercase = 65;
    char lowercase = 97;
    int index = 0;
    while(uppercase<=90 && lowercase <=122 && index<26)
          {
              printf("The count of %c and %c is: %d\n",uppercase,lowercase,freq[index]);
              uppercase++;
              lowercase++;
              index++;
          }
}

