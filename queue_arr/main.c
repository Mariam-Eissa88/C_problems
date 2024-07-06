#include <stdio.h>
#include <stdlib.h>
#include "queue_ds.h"
uint32_t max =0;
uint32_t number1=0x11 ,number2=0x22 ,number3=0x33,number4=0x44;
void *ret_val;
void *ret_val2;
int main()
{
    QueueStatus_t ret =QUEUE_NOK;
    Queue_t *MMQ;
    printf("please enter the number of index:");
    scanf("%i",&max);
    MMQ=createQueue(max,&ret);
    ret=EnqueueElement(MMQ,&number2);
    printf("=> %i\n",ret);
    ret=EnqueueElement(MMQ,&number2);
    printf("=> %i\n",ret);
    ret=EnqueueElement(MMQ,&number3);
    printf("=> %i\n",ret);
    ret=EnqueueElement(MMQ,&number4);/*
    printf("=> %i\n",ret);
    ret=EnqueueElement(MMQ,&number1);
    printf("=> %i\n",ret);
    ret_val=DequeueElement(MMQ,&ret);
    printf("%X",(*(uint32_t*)ret_val));
    printf("=> %i\n",ret);
    ret_val=DequeueElement(MMQ,&ret);
    printf("=> %i\n",ret);
    ret_val=DequeueElement(MMQ,&ret);
    printf("=> %i\n",ret);
    ret_val=DequeueElement(MMQ,&ret);
    printf("=> %i\n",ret);
    ret_val=DequeueElement(MMQ,&ret);
    printf("=> %i\n",ret);*/
    printf("===================\n");
    ret_val2=QueueFront(MMQ,&ret);
    printf("%x",*((uint32_t*)ret_val2));
    printf("%i",ret);
    return 0;
}
