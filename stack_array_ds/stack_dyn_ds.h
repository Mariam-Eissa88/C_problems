#ifndef _STACK_DYN_DS_H
#define _STACK_DYN_DS_H
#define ZERO_INI 0
#include "platfform.h"
typedef enum {
    STACK_FULL,
    STACK_EMPTY,
    STACK_OK,
    STACK_NOK
};
typedef struct dstack{
    void **stack_array //point to arrays
    sint32_t counter //actual number of index
    sint32_t stack_max //maximum size of array
    uint32_t stack_top //the index of the top
}stack_t;

#endif // _STACK_DYN_DS_H
