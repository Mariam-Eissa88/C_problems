#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char number1[101];
char number2[101];
int i;
int j;
int y;
int w=0;
int counter;
int main()
{
    gets(number1);
    gets(number2);
    for(i=0;i<101;i++)
    {
        if((islower(number1[i]))&&(islower(number2[i])))
           {
               counter++;

           }

    }
    y=counter;
    for(j=0;j<counter;j++)
    {
        if(number1[j]==number2[y-1])
        {

            y--;

        }
        else
        {
            printf("NO");
            w=1;
            break;
        }
    }
    if(w==0)
    {
        printf("YES");

    }

    return 0;
}
