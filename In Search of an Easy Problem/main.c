#include <stdio.h>
#include <stdlib.h>
int n=0;
int x=0;
int i=0;
int z=0;
int main()
{
    scanf("%i",&n);
    if((n>0)&&(n<=100))
    {
        x=2*n;
        char number[x];
        fgets(number,sizeof(number),stdin);
        gets(&number);
        for(i;i<x;i+=2)
        {

            if(number[i]=='1')
            {
                z++;
            }
        }

    }
    if(z>0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
