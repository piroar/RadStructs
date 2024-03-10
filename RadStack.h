/*I'm looking to insert malloc in Stack_init, so the user won't have to do this himself*/
//I'm also looking to insert a function that prints the entire stack and one that shows the top element
//Lastly in the near future i will also build a SearchStack and a SortFunction function
//Note: to this point the stack works only for integers
struct RadStack
{
    int a[5]; //Change the 5 with the size you want your stack to have
    int top;
};

void Stack_init(struct RadStack* r){            //use this function to initialize the Stack
    r->top=-1;
    return 0;
}

void Stack_push(struct RadStack* r, int item){  //use this function to insert an item in the Stack
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
    return -69;   //you can change with a number of your choice
}