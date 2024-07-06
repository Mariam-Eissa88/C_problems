#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 1001
int number1[2];
int numbers[MAX];
int numIntegers = 0;
int input=0;
int z=0;
int n=0;
int h=0;
int x=0;
int main()
{
    scanf("%i %i",&number1[0],&number1[1]);
    n=number1[0];
    h=number1[1];
    while (numIntegers < n && scanf("%i", &input) == 1) {
            numIntegers++;
        numbers[numIntegers] = input;

    }
    for(z=1;z<=n;z++)
    {

            if(numbers[z]>h)
        {

            x=x+2;

        }
        else if(numbers[z]<=h)
        {
            x++;

        }



    }
     printf("%i",x);

return 0;
}
