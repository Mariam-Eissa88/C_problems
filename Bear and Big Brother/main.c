#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int number1[3];
int i;
int counter;
int a;
int b;
int main()
{
    scanf("%i %i",&number1[0],&number1[1]);
    a=number1[0];
    b=number1[1];
    if((b>=1)&&(b<=10))
    {
        if(a<=b)
        {
            for(i=0;a<=b;i++)
            {
                a=a*3;
                b=b*2;
                counter++;
            }
        }
    }
   printf("%i",counter);
    return 0;
}
