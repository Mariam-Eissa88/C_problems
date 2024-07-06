#include <stdio.h>
#include <stdlib.h>
long long int result=0;
long long int input=0;
long long int i=0;
int main()
{
    scanf("%lld",&input);

        if(input%2 == 0)
        {
            result=input/2;
        }
        else
        {
            result=-1*((input+1)/2);
        }
   printf("%lld",result);
    return 0;
}
