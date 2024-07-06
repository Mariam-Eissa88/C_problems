#include <stdio.h>
#include <stdlib.h>
int n=0;
int i=0;
int main()
{
    scanf("%i",&n);
    if((n<=100)&&(n>=1))
    {
         for(i=1;i<=n;i++)
    {
        if((i%2==0)&&(i!=n))
        {
            printf("I love that ");
        }
        if((i%2!=0)&&(i!=n))
        {
            printf("I hate that ");
        }
        if(i==n)
        {

            if(i%2==0)
            {
                printf("I love it ");
            }
            else
            {
                printf("I hate it ");
            }
        }

    }

    }

    return 0;
}
