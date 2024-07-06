#include <stdio.h>
#include <stdlib.h>
 unsigned int numbers[150];
unsigned int n;
unsigned int x=0;
int main()
{
    unsigned int i=0;

    scanf("%i",&n);

    if((n<=150) && (n>=1))
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",&numbers[i]);

            if((numbers[i]=='++X')||(numbers[i]=='X++'))
            {
               x++;

            }

            else if((numbers[i]=='--X')||(numbers[i]=='X--'))
            {
                x--;
            }
        }

    }
    printf("%i\n",x);

    return 0;
}
