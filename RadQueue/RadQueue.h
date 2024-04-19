/*I'm looking to insert malloc in Stack_init, so the user won't have to do this himself*/
//Lastly in the near future i will also build a SearchStack and a SortStack function
//Note: to this point the stack works only for integers and with a static array
#include <stdlib.h>
struct RadQueue
{
    int *a; //Change the 5 with the size you want your stack to have
    int front;
    int rear;
    int size;
};

int Queue_init(struct RadQueue* r, int size){            //use this function to initialize the Stack
    r->front=-1;
    r->rear=-1;
    r->size=size;
    r->a=malloc(r->size*sizeof(int));
    return 0;
}

void Queue_destroy(struct RadQueue* r){
    free(r->a);
}

int Queue_push(struct RadQueue* r, int item){  //use this function to insert an item in the Stack
    if (r->rear==r->front&& r->front==-1){
        r->front++;
        r->rear++;
        r->a[0]=item;
        return 0;
    }
    if (r->rear<r->size-1) //same thing for this 5
    {
        r->rear++;
        r->a[r->rear]=item;
        return 0;
    }
    printf("Queue is full\n");
    return -1;
}

int Queue_pop(struct RadQueue* r){             //use this function to delete an item from the Stack
    if (r->front<r->rear)
    {
        r->front++;
        return r->a[r->front-1];
    }
    if (r->front==r->rear){
        int temp=r->rear;
        r->front=-1;
        r->rear=-1;
        return r->a[temp];
    }
    printf("Queue is empty");
    return -1;   //you can change with a number of your choice
}

int Queue_size(struct RadQueue* r){            //use this function to check the size your stack has
    if (r->front>0) return r->rear-r->front+1;
    if (r->front==0) return r->rear;
}

int Queue_front(struct RadQueue* r){             //use this function to check the top element of your stack
    return r->a[r->front];
}

void Queue_print(struct RadQueue* r){          
/*use this function to print the stack with the top element(most recently inserted item) showed first(at the top) and the least recently inserted item showed last(at the bottom)*/
    for (int i = r->front; i <= r->rear; i++)
    {
        printf("%d\n",r->a[i]);
    }
}