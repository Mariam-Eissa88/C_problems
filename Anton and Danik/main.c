#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100001
char number[MAX];
int i=0;
int n=0;
int A=0;
int D=0;
int main()
{
    scanf("%i\n",&n);
    if((n>=0)&&(n<=100000))
    {
        scanf("%s",&number);
        for(i=0;number[i]!='\0';i++)
        {
            if(number[i]=='A')
            {
                A++;
            }
            else if(number[i]=='D')
            {
                D++;
            }
        }
    }
    if(A>D)
    {
        printf("Anton");
    }
    if(D>A)
    {
        printf("Danik");
    }
    if(A==D)
    {
        printf("Friendship");
    }
    return 0;
}
