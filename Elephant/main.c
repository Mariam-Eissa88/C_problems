#include <stdio.h>
#include <stdlib.h>
unsigned int number[5]={1,2,3,4,5};
unsigned int x;
int i=5;
int j=0;
int main()
{
    scanf("%i",&x);
    while(1)
    {
        if(x>=i)
        {
            x-=i;
            j++;
            if(x==0)
            {
                printf("%i",j);
                break;
            }
        }
        else{
            i--;
        }
    }

    return 0;
}
