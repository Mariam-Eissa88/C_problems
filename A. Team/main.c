#include <stdio.h>
#include <stdlib.h>
int problems;
int opinion[1000][3];
int q[3];
int w=0;
int main()
{
     int i=0;
     int y=0;
     int z=1;

    scanf("%i",&problems);
    if(problems<=1000 &&problems>=0)
    {
        for(y=0;y<problems;y++){
        for(i=0;i<3;i++){
        scanf("%i",&(opinion[y][i]));
        q[i]=z&opinion[y][i];

    }
       if ((q[0] == 1 && q[1] == 1) || (q[0] == 1 && q[2] == 1) || (q[1] == 1 && q[2] == 1)){
        w++;
       }
    }
    }
       else{

       }
    printf("%i\n",w);

    return 0;
