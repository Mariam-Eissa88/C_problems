#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char line1[101];
char line2[101];
int i;
int n;
int zero;
int main()
{
    fgets(line1, sizeof(line1)+1,stdin);
    fgets(line2, sizeof(line2)+1, stdin);

        if(((sizeof(line1)/sizeof(line1[0]))>=1) && ((sizeof(line1)/sizeof(line1[0])) <= 101))
        {
            for(i=0;i<(sizeof(line1)/sizeof(line1[0]));i++)
        {
            line1[i]=tolower(line1[i]);
            line2[i]=tolower(line2[i]);
        if(line1[i]==line2[i])
        {
            zero=0;

        }
        if(line1[i]!=line2[i])
        {
            if(line1[i]>line2[i])
            {
                zero=1;


                 break;
            }
            else if(line1[i]<line2[i])
            {
                zero=-1;

                break;
            }
        }
        }
        }



    printf("%i",zero);
return 0;
}
