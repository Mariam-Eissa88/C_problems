#include <stdio.h>
#include <stdlib.h>
#include "stack_ds.h"
stack_ds_t stack1;
int main()
{
    return_status_t ret =R_NOK;
    ret= stack_init(&stack1);//address
    if(R_NOK==ret)
    {
        printf("stack failed to initialized \n");

    }
    else{}

    return 0;
}
