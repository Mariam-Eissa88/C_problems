#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <wchar.h>
#define MAX 1000000000000000001
wchar_t number1[];
int i=0;
int j=0;
int x=0;


int main()
{
    scanf("%ls",&number1);

    for(i=0;number1[i]!='\0';i++)
    {

       if((number1[i]=='4')||(number1[i]=='7'))
        {
            j++;

        }

    }

    if((j==7)||(j==4))
    {
        printf("YES");
    }
    else
    {
        printf("NO");

    }


    return 0;
}
