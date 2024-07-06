#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char number[101];
int i;
int up;
int low;
int main()
{
    gets(number);
    for(i=0;i<101;i++)
    {
        if(isupper(number[i]))
        {
            up++;
        }
        else if(islower(number[i]))
        {
            low++;
        }
    }
    if(up>low)
    {
        for(i=0;i<101;i++)
        {
             number[i]=toupper(number[i]);
        }

        printf("%s",number);
    }
    else
    {
        for(i=0;i<101;i++)
        {
             number[i]=tolower(number[i]);
        }
        printf("%s",number);
    }
    return 0;
}
