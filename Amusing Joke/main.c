#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
char guest[MAX];
char host[MAX];
char pile[MAX];
int x=0;
int z=0;
int a=0;
int p=0;
int o=0;
int i=0;
int r=0;
int t;
int g;
char w[]="YES";
int main()
{
    gets(guest);
    gets(host);
    gets(pile);
    for(r=0;r<MAX;r++)
    {
        if((guest[r]!='\0'))
            {
                p++;
            }
            if((host[r]!='\0'))
            {
                o++;
            }
            if((pile[r]!='\0'))
            {
                i++;
            }
    }
    for(x=0;x<MAX;x++)
    {
        if(isupper(guest[x]) && isupper(host[x]) && isupper(pile[x]))
        {


            for(z=0;z<MAX;z++)
            {
                if((pile[x]==guest[z]))
               {
                   //guest[z]='\0';
                   t++;

               }
               else if((pile[x]==host[z]))
               {
                   //host[z]='\0';
                   g++;

               }
               else{
                    char w[]="NO";
                    a=1;
                    break;
               }
            }
            if(a==1)
            {
                break;
            }

        }
    }
    printf("%i\n",p);
    printf("%i\n",o);
    printf("%i\n",i);
    printf("%i\n",t);
    printf("%i\n",g);
    if(((o+p)!=i))
            {
                printf("NOtt");
            }
            else{
                    if((t+g)!=i)
                    {
                        printf("NO");
                    }
                    else{
                         printf("%s",w);
                    }


            }


    return 0;
}
