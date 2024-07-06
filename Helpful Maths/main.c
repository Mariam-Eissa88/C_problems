#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH 100
char numbers[MAX_LENGTH];
int i=0;
signed int c=0;
int z=0;
int q=0;
int r=0;
void swap(char *ptr1, char*ptr2);
int main()
{
    gets(numbers);

    for(z=0;z<MAX_LENGTH-1;z+=2)
    {
        if(isdigit(numbers[z]))
        {
            q++;

        }
    }


    for(i=0;i<q-1;i++)
    {

       for(c=0;c<(q-1-i)*2;c++)
       {


           if(numbers[c]>numbers[c+2]&&(numbers[c]!='+')&&(numbers[c+2]!='+'))
           {
               swap(&numbers[c],&numbers[c+2]);
           }
           else{/*nothing*/}
       }

    }
    printf("%s",numbers);

    return 0;
}
void swap(char*ptr1, char *ptr2)
{
        char temp=0;
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;

}
