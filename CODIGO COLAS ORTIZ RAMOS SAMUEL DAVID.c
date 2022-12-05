#include <stdio.h>
#define QUEUE_CAPACITY 10

struct queue{
    int data[QUEUE_CAPACITY];
    int start;
    int end;
    int count;
};

void setupQueue(struct queue *q);
int enqueue(struct queue *q, int value);
int dequeue(struct queue *q, int *value);

int main() {

    struct queue q;
    int dato;
    setupQueue(&q);

    enqueue(&q,10);
    enqueue(&q,11);
    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    enqueue(&q,15);
    enqueue(&q,16);
    enqueue(&q,17);
    enqueue(&q,18);
    enqueue(&q,19);
    dequeue(&q,&dato);
    dequeue(&q,&dato);



    return 0;
}

void setupQueue(struct queue *q)
{
    q->start=0;
    q->end=0;
    q->count=0;
}

int dequeue(struct queue *q, int *value)
{
    int r=0;
    if(q->start != q->end) //no esta vacia
    {
        *value = q->data[q->start];
        q->start++;
        r=1;
        printf("Dato eliminado %d \n",*value);
    }else{
        printf("Error, cola vacia \n");
    }
    return r;
}

int enqueue(struct queue *q, int value)
{
    int r=0;
    if(q->end < QUEUE_CAPACITY)
    {
        q->data[q->end]=value;
        printf("encolado el dato: %d \n",q->data[q->end]);
        q->end++;
        r=1;
    }else{
        printf("Error, cola llena \n");
    }
return r;
}
