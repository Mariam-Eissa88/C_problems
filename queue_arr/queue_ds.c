#include <stdio.h>
#include <stdlib.h>
#include "queue_ds.h"
Queue_t *createQueue(uint32_t max_size,QueueStatus_t *status2){
    Queue_t *MyQueue;
    /*create queue object in the heap to hold the queue information*/
    *status2 =QUEUE_NOK;
    MyQueue=(Queue_t *)malloc(sizeof(Queue_t));
    if(NULL==MyQueue)
    {
        //error status
        *status2=QUEUE_NOK;
        MyQueue=NULL;
    }
    else{
        *status2=QUEUE_OK;
        /*create array of void pointers to hold the address of the data "elements of the array"*/
        MyQueue->QueueArray=(void**)calloc(max_size,sizeof(void*));
        if(MyQueue->QueueArray==NULL){
            *status2=QUEUE_NOK;
            MyQueue=NULL;
        }

        else{
            *status2=QUEUE_OK;
            MyQueue->counter=0;
            MyQueue->QueueFront=-1;
            MyQueue->Queuerear=-1;
            MyQueue->QueueMaxSize=max_size;
        }
    }
    return MyQueue;
    }
QueueStatus_t EnqueueElement(Queue_t *queue_obj,void *item_ptr){
    QueueStatus_t status=QUEUE_NOK;
    if((NULL==queue_obj)||(NULL==item_ptr))
    {
        status=QUEUE_NULL_POINTER;
    }
    else{
        /*validate the queu is not full*/
        if(queue_obj->counter==queue_obj->QueueMaxSize)
        {
           status=QUEUE_FULL;

        }
        else{
            /*incerement queue rear*/
            (queue_obj->Queuerear)++;//should increment -->next element not over write
            if(queue_obj->Queuerear==queue_obj->QueueMaxSize)
            {
                queue_obj->Queuerear=0;
            }
            queue_obj->QueueArray[ queue_obj->Queuerear]=item_ptr;
            if(queue_obj->counter==0)
            {
                queue_obj->QueueFront=0;
                queue_obj->counter=1;
            }
            else{
                (queue_obj->counter)++;
            }
            status=QUEUE_OK;
        }
    }
    return status;

}
void *DequeueElement(Queue_t *queue_obj,QueueStatus_t *status){
        QueueStatus_t status1=QUEUE_NOK;
        void *returned =0;
        if((NULL==queue_obj)||(NULL==status))
        {
            status1=QUEUE_NULL_POINTER;
        }
        else{
            /**check if the queue not empty***/
            if(queue_obj->counter==0)
            {
                status1=QUEUE_EMPTY;
                returned =NULL;
            }
            else{
                 returned=queue_obj->QueueArray[queue_obj->QueueFront];
                (queue_obj->QueueFront)++;
                if(queue_obj->QueueFront==queue_obj->QueueMaxSize)
                {
                    queue_obj->QueueFront=0;
                }

                if(queue_obj->counter==1)
                {
                    (queue_obj->Queuerear)=-1;
                    (queue_obj->QueueFront)=-1;
                }
                (queue_obj->counter)--;
                status1=QUEUE_OK;
            }

        }
        return returned;

}
void *QueueFront(Queue_t *queue_obj,QueueStatus_t *status3){
    status3=QUEUE_NOK;
    void *returned =NULL;
        if((NULL==queue_obj))
        {
            status3=QUEUE_NULL_POINTER;
        }
        else{
            if(queue_obj->counter==0)
            {
                status3=QUEUE_EMPTY;
            }
            else{
                returned=queue_obj->QueueArray[queue_obj->QueueFront];
                status3=QUEUE_OK;
            }

        }
        return returned;

}
void *QueueRear(Queue_t *queue_obj,QueueStatus_t *status4){
     status4=QUEUE_NOK;
        if((NULL==queue_obj))
        {
            status4=QUEUE_NOK;
        }
        else{
            status4=QUEUE_OK;
        }

}
QueueStatus_t GetQueueCount(Queue_t *queue_obj,uint32_t *Queue_count){
    QueueStatus_t status=QUEUE_NOK;
        if((NULL==queue_obj)||(NULL==Queue_count))
        {
            status=QUEUE_NOK;
        }
        else{
            status=QUEUE_OK;
        }
        return status;
}
QueueStatus_t QueueDestroy(Queue_t *queue_obj){
    QueueStatus_t status= QUEUE_NOK;
    if(NULL==queue_obj)
    {
        status= QUEUE_NOK;

    }
    else{
        status= QUEUE_OK;
    }
    return status;
}
