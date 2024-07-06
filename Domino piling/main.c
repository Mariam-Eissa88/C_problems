#include <stdio.h>
#include <stdlib.h>
#define N 16
unsigned int board[2];
int board_dim;
int n;
int main()
{
    scanf("%i %i",&board[0],&board[1]);
    if((board[1]>=1)&& (board[1]<=N))
    {
        if(board[0]<=board[1])
        {
            board_dim=board[0]*board[1];
            n=board_dim/2;
            printf("%i",n);
        }

    }

    return 0;
}
