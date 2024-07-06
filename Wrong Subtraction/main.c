#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <wchar.h>
#define MAX 1000000001
wchar_t number[];
int i=0;
int k=0;
int y=0;
int x=0;
int z=0;
int main()
{

    scanf("%ls %i",number,&k);
    for(i=0;number[i] != '\0';i++)
    {
        }
     if((k<=50)&&(k>=1)&&(y<MAX))
            {
                for(x=1;x<=k;x++)
                {
                    if(number[i-1]>'0')
                    {
                        number[i-1]--;

                    }
                    else if(number[i-1]=='0')
                    {

                    i--;


                    }
                }
            }
    for(z=0;z<i;z++)
    {
       printf("%c",number[z]);
    }

    return 0;
}
