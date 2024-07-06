#include <stdio.h>
#include <stdlib.h>
int n;
int i;
int x;
int z=0;
int main()
{
    scanf("%i",&n);
    int numbers[n];
    if((n>=1)&&(n<=100000))
    {
        for(i=0;i<n;i++)
        {
            scanf("%i",&numbers[i]);

        }
    }
    for(x=1;x<=n;x++)
    {
        if(numbers[x]!=numbers[x-1])
        {
            z++;
        }
    }
    printf("%i",z);

    return 0;
}
