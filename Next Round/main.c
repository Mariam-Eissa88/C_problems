#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
int n=0;
int numIntegers=0;
int number1[6];
int numbers[MAX_SIZE];
int input =0;
int i;
int k=0;
int main()
{
    scanf("%i %i",&number1[0],&number1[1]);

    while (numIntegers < number1[0] && scanf("%i", &input) == 1) {
        numbers[numIntegers] = input;

        numIntegers++;
    }
    k=number1[1];
    for(i=0;i<number1[0];i++)
    {
        if(numbers[i]>=numbers[k-1]&&(numbers[i]>0))
        {
            n++;

        }

    }
    printf("%i",n);
    return 0;
}
