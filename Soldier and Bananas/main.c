#include <stdio.h>
#include <stdlib.h>
unsigned int number[3];
unsigned int  i;
unsigned int k;
unsigned int n;
unsigned int w;
unsigned int res ;
signed int br;
int main()
{
    scanf("%i %i %i",&number[0],&number[1],&number[2]);
    k=number[0];
    n=number[1];
    w=number[2];
    if((1<=k)&&(w<=1000)&&(n<=10^9)&&(n>=0))
    {
        for(i=1;i<=w;i++)
        {
            res+=k*i;
        }
    }
    br=res-n;
    if(br>0)
    {
        printf("%i",br);
    }
    else
    {
        br=0;
        printf("%i",br);
    }

    return 0;
}
