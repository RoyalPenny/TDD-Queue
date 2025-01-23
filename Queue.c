#include "Queue.h"

//Initialises the Queue
void initializeQueue(Queue* q)
{
    q -> back = 0;
    q -> front = 0;
} 

//Add a number to the queue
void enqueue(Queue* q, int i){

    q->queue[q->front] = i;
    q->front++;
};

//Removes a number from the queue
void dequeue(Queue* q){};


//View the front of the queue
int peek(Queue* q)
{
    return q->queue[q->front - 1];
}
