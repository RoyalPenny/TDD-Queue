#include <stdint.h>
#define MAX_SIZE 256

//Setup queue structure
typedef struct {
    int queue[MAX_SIZE];
    int front;
    int back;
} Queue;

void initializeQueue(Queue* q);
void enqueue(Queue* q, int i);
void dequeue(Queue* q);
int peek(Queue* q);