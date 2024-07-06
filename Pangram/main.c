#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int n=0;
int x=0;
int i=0;
char s[101];
int main()
{
    scanf("%i",&n);
    scanf("%s",&s);
    for(i=0;i<100;i++)
    {
        if((isupper(s[i]))||(islower(s[i])))
        {
            x++;
        }
    }
    if(x==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
