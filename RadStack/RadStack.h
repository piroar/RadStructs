/*I'm looking to insert malloc in Stack_init, so the user won't have to do this himself*/
//Lastly in the near future i will also build a SearchStack and a SortStack function
//Note: to this point the stack works only for integers and with a static array
#include <stdlib.h>
struct RadStack
{
    int *a; //Change the 5 with the size you want your stack to have
    int top;
};

int Stack_init(struct RadStack* r){            //use this function to initialize the Stack
    r->top=-1;
    r->a=malloc(5*sizeof(int));
    return 0;
}
void Stack_destroy(struct RadStack* r){
    free(r->a);
}
int Stack_push(struct RadStack* r, int item){  //use this function to insert an item in the Stack
    if (r->top<5) //same thing for this 5
    {
        r->top++;
        r->a[r->top]=item;
        return 0;
    }
    printf("Stack is full\n");
    return -1;
}

int Stack_pop(struct RadStack* r){             //use this function to delete an item from the Stack
    if (r->top>=0)
    {
        r->top--;
        return r->a[r->top+1];
    }
    printf("Stack is empty");
    return -1;   //you can change with a number of your choice
}

int Stack_size(struct RadStack* r){            //use this function to check the size your stack has
    return r->top+1;
}

int Stack_top(struct RadStack* r){             //use this function to check the top element of your stack
    return r->a[r->top];
}

void Stack_print(struct RadStack* r){          
/*use this function to print the stack with the top element(most recently inserted item) showed first(at the top) and the least recently inserted item showed last(at the bottom)*/
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n",r->a[i]);
    }
}