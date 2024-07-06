#include <stdio.h>
#include <stdlib.h>
#include "stack_ds.h"
/**
 * @brief check stack if full
 * @param stack1 pointer to stack
 * @retval status of stack
 */
static stack_status_t stack_full(stack_ds_t *stack1)
{
    if(stack1->stack_pointer==STACK_MAX_SIZE-1)
    {
        return STACK_FULL;
    }
    else{
        return STACK_NOT_FULL;
    }

}
/**
 * @brief check stack if empty
 * @param stack1 pointer to stack
 * @retval status of stack
 */
static stack_status_t stack_empty(stack_ds_t *stack1)
{
    if(stack1->stack_pointer==-1)
    {
        return STACK_EMPTY;
    }
    else{
        return STACK_NOT_FULL;
    }
}
/**
 * @brief initialize the stack pointer
 * @param stack1 pointer to stack
 * @retval status of initalization process
 */

return_status_t stack_init(stack_ds_t *stack1)
{
    return_status_t ret=R_NOK;
    if(NULL==stack1)
    {
        ret=R_NOK;
    }
    else{
        stack1->stack_pointer=-1;
        ret=R_OK;
    }

    return  ret;
}
