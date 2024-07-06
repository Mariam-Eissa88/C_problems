#include <stdio.h>
#include <stdlib.h>
unsigned int n;
int i;
int q;
int z;
char number[100];
int main()
{
    scanf("%i",&n);
    scanf("%s",number);
    if((n>=1)&&(n<=50))
       {
           for(i=0;i<n;i++)
           {
               if(number[i-1]==number[i])
               {
                   z++;
               }
           }
       }
       printf("%i",z);
    return 0;
}
