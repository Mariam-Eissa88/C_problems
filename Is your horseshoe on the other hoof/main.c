#include <stdio.h>
#include <stdlib.h>
long long numbers[4];
int x=0;
int i=0;
int n=0;

int main()
{
    scanf("%li %li %li %li",&numbers[0],&numbers[1],&numbers[2],&numbers[3]);

    for(i=0;i<4;i++)
    {
        for(n=0;(n<4);n++)
        {
            if(numbers[i]==numbers[n]&&(n>i))
            {
                x++;

                break;
            }

        }
    }

        printf("%i",x);


    return 0;
}
