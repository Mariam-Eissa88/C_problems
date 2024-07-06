#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char number[1004];
int main()
{
    gets(number);
    number[0]=toupper(number[0]);
    printf("%s",number);
    return 0;
}
