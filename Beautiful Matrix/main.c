#include <stdio.h>
#include <stdlib.h>
unsigned int matrix[5][5];
int j;
int i;
int x;
int comp_j;
int comp_i;
int result;
int main()
{
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%i",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                comp_j=abs(j-2);
                comp_i=abs(i-2);
               // printf("%i\n",comp_i);
              //  printf("%i\n",comp_j);
                result=comp_j+comp_i;
            }
        }
    }
    printf("%i",result);

    return 0;
}
