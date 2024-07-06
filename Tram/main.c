#include <stdio.h>
#include <stdlib.h>
unsigned int n;
int i;
int j=0;
int x;
int z;
int max;
int main()
{
    scanf("%i",&n);
    unsigned int number[n][2];
    unsigned int arr_x[n];


        if((n>=2)&&(n<=1000))
        {
            for(i=0;i<n;i++)
            {
            scanf("%i %i",&number[i][0],&number[i][1]);
            if((number[i][0]>=0)&&(number[i][1]>=0)&&(number[i][0]<=1000)&&(number[i][1]<=1000))
            {
                x=abs(x-number[i][0]+number[i][1]);

                arr_x[j]=x;
                j++;
            }

             }
              max=arr_x[0];
              for(z=0;z<n;z++)
      {
       if(arr_x[z]>max)
       {
           max=arr_x[z];
       }
    }
   printf("%i",max);

        }

    return 0;
}
