#include <stdio.h>
#include <stdlib.h>
int n=0;
int i=0;
int sum=0;
int index=0;
int output=0;
float result=0;
int number[100];
int main()
{
    scanf("%i\n",&n);
    while((index<n)&&(scanf("%i",&output)==1))
    {
        number[index]=output;
        index++;
    }

    for(i=0;i<n;i++)
    {
        sum+=number[i];
    }
    n=n*100;
    result=((float)sum/n)*100;
    printf("%f",result);

    return 0;
}
