#include <stdio.h>
#include "RadStack.h"


int main(){
    int item, i, errorcode;
    struct RadStack* r=malloc(sizeof(struct RadStack)); //allocate space for the stack pointer
    errorcode=Stack_init(r); //initialize the stack
    if (errorcode!=0){
        printf("Stack didn't initialize\n");
        return 0;
    }
    for (i = 0; i < 5; i++)
    {
        errorcode=Stack_push(r,i);   //the example uses this loop to insert items to the stack
        printf("done\n");
    }
    printf("The Stack has size: %d with the top element being: %d\n",Stack_size(r),Stack_top(r));
    Stack_print(r);
    for (i = 0; i < 5; i++)
    {
        item=Stack_pop(r); //the example uses this loop to delete items from the stacdk
        if (item!=-1) printf("Item:%d\n",item);
    }
    return 0;
}