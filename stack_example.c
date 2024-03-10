#include <stdio.h>
#include "RadStack.h"


int main(){
    int item,i;
    struct RadStack* r=malloc(sizeof(struct RadStack)); //allocate space for the stack pointer
    Stack_init(r); //initialize the stack
    for (i = 0; i < 5; i++)
    {
        Stack_push(r,i);   //the example uses this loop to insert items to the stack
        printf("done\n");
    }
    for (i = 4; i >= 0; i--)
    {
        printf("%d\n",r->a[i]); //this loop shows the items thar are currently in the stack with
        //the top element being at the top
    }
    for (i = 0; i < 5; i++)
    {
        item=Stack_pop(r); //the example uses this loop to delete items from the stacdk
        printf("Item:%d\n",item);
    }
    return 0;
}