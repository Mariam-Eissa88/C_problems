#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char number[100];
int i;
int j;
int counter=0;
int main()
{
     gets(number);
     for(i=0;i<100;i++)
     {

         if(islower(number[i]))
         {
             counter++;
             for(j=0;j<i;j++)
             {

                 if(number[j]==number[i])
                 {
                     counter--;
                     break;

                 }


             }
         }

     }
     if(counter%2==0)
     {

         printf("CHAT WITH HER!\n");
     }
     else
     {

         printf("IGNORE HIM!\n");
     }
    return 0;
    }
