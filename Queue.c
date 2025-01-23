#include "Queue.h"

//Initialises the Queue
void initializeQueue(Queue* q)
{
    q -> back = 0;
    q -> front = 0;
} 

//Add a number to the queue
void enqueue(Queue* q, int i){
    
    //Unoptimised code
    int j;
    j = i;

    q->queue[q->front] = j;
    q->front++;
};

//View the front of the queue
int peek(Queue* q)
{
    return q->queue[q->front - 1];
}
