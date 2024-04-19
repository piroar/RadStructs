#include <stdio.h>
#include "RadQueue.h"


int main(){
    int item, i, errorcode;
    struct RadQueue* r=malloc(sizeof(struct RadQueue)); //allocate space for the stack pointer
    errorcode=Queue_init(r,5); //initialize the stack
    if (errorcode!=0){
        printf("Stack didn't initialize\n");
        return 0;
    }
    for (i = 0; i < 5; i++)
    {
        errorcode=Queue_push(r,i);   //the example uses this loop to insert items to the stack
        printf("done\n");
    }
    printf("The Queue has size: %d with the front element being: %d\n",Queue_size(r),Queue_front(r));
    printf("front=%d,rear=%d\n",r->front,r->rear);
    Queue_print(r);
    for (i = 0; i < 5; i++)
    {
        item=Queue_pop(r); //the example uses this loop to delete items from the stacdk
        if (item!=-1) printf("Item:%d\n",item);
    }
    Queue_destroy(r);
    return 0;
}