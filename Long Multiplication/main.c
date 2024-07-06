#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int t=0;
int number1[9];
int y[9];
int i=0;
int index_x=0;
int index_y=0;
int input1=0;
int input2=0;
int main()
{
    scanf("%i",&t);

        while (index_x < t && scanf("%i",&input1)==1) {
        number1[index_x] = input1;
   // printf("%i\n",number1[index_x]);
        index_x++;
        scanf("%i",&input2);
         y[index_y]=input2;
            index_y++;
    }
    int twist=0;
    for(i=0;i<t;i++)
    {
        twist=number1[i];
        number1[i]=y[i];
        y[i]=twist;
    }
    for(i=0;i<t;i++)
    {
        printf("%i\n",number1[i]);
        printf("%i\n",y[i]);

    }
    return 0;
}
