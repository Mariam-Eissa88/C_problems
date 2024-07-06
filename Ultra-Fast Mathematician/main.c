#include <stdio.h>
#include <stdlib.h>
char number1[101];
char number2[101];
char number3[101];
int x=0;
int y=0;
int main()
{
    scanf("%s",&number1);
    scanf("%s",&number2);

    for(x=0;x<100;x++)
    {
        if(number1[x]!='\0')
        {
            if((number1[x]==number2[x]))
        {

            number3[x]='0';

        }
        else{
                number3[x]='1';

            }
        }

    }


       printf("%s",number3);


    return 0;
}
