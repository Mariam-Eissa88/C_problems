#include <stdio.h>
#include <stdlib.h>
int n=0;
int number[2];
int i=0;
int x=0;
int main()
{
    scanf("%i",&n);
    if((n>=1)&&(n<=100))
    {
        for(i=0;i<n;i++)
    {
        scanf("%i %i",&number[0],&number[1]);
        if((number[1]-number[0])>=2)
        {
            x++;
        }
    }
    }
    printf("%i",x);
    return 0;
}
