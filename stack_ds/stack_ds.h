#ifndef _STACK_DS_H
#define _STACK_DS_H

#include "std_types.h"
#define STACK_MAX_SIZE 5
typedef struct stack_ds {
    uint32_t stack_pointer;
    uint32_t data[STACK_MAX_SIZE];
}stack_ds_t;//decliration of stack structure
return_status_t stack_init(stack_ds_t *stack1); //decliraction
typedef enum stack_status{
    STACK_EMPTY,
    STACK_FULL,
    STACK_NOT_FULL
    }stack_status_t;

#endif // _STACK_DS_H
