#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXIMUM_LENGTH 100
#define MAXIMUM_LINES 100
char input[MAXIMUM_LINES][MAXIMUM_LENGTH];
char (*ptr)[MAXIMUM_LINES] [MAXIMUM_LENGTH]=&input;
int main()
{
    unsigned int index;
    unsigned int  mid_num;
    unsigned int line;
    for (line=0;line<=MAXIMUM_LINES;line++){
            scanf("%s",&input[line][0]);

    for(index=0;(input[line][index]!='\0')&&(index<=MAXIMUM_LENGTH);index++){


    }

     if(index <11){

        if (isalpha(input[line][index-1]))
        {  // Check if character is Latin alphabet
            printf("%s\n",input[line]);
        }
        else{

            }

            }



        else
        {
            mid_num=index-2;
            printf("%c%i%c\n", input[line][0], mid_num, input[line][index-1]);
        }


    }
    return 0;
}

