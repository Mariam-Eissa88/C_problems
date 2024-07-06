#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int n=0;
int numbers[MAX_SIZE];
int numIntegers = 0;
int input;
int x=1;
signed int min=0;
int z=0;
int q=0;
int w=0;
int u=0;
int main()
{
    scanf("%i",&n);
     while (numIntegers < n && scanf("%i", &input) == 1) {
            numIntegers++;
        numbers[numIntegers] = input;

    }

    min=numbers[x+1]-numbers[x];
    w=abs(min);
    for(x=1;x<n;x++)
    {

       z=numbers[x+1]-numbers[x];
       if(abs(z)==w)
       {
           q=1;
       }
       else
       {
           q=0;
           break;
       }
    }
    if(q==1)
    {
        printf("%i",(numbers[n]+min));
    }
    else if(q==0)
    {
        printf("%i",numbers[n]);
    }
    return 0;
}
