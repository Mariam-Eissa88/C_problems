#ifndef _QUEUE_DS_H
#define _QUEUE_DS_H
#include "pllatfoorm.h"
typedef struct {
    void **QueueArray;      /*pointer to array of void pointers*/
    uint32_t QueueMaxSize;  /*maximum elements in the queue*/
    sint32_t counter;       /*number of elements in array*/
    sint32_t QueueFront;    /* index of the front element*/
    sint32_t Queuerear;    /* index of the rear element*/
}Queue_t;

typedef enum {
    QUEUE_NOK=0,
    QUEUE_OK,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_POINTER
}QueueStatus_t;
//**Function declaration **//

Queue_t *createQueue(uint32_t max_size,QueueStatus_t *status2);
QueueStatus_t EnqueueElement(Queue_t *queue_obj,void *item_ptr);
void *DequeueElement(Queue_t *queue_obj,QueueStatus_t *status);
void *QueueFront(Queue_t *queue_obj,QueueStatus_t *status3);
void *QueueRear(Queue_t *queue_obj,QueueStatus_t *status4);
QueueStatus_t GetQueueCount(Queue_t *queue_obj,uint32_t *Queue_count);
QueueStatus_t QueueDestroy(Queue_t *queue_obj);


#endif // _QUEUE_DS_H
