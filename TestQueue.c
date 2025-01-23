#include "unity/src/unity.h"
#include "Queue.h"

void setUp(void){}
void tearDown(void){}

void test_Enqueue(void)
{
    //Creates a queue and adds the number 1 to the queue
    Queue q; 
    initializeQueue(&q);
    enqueue(&q, 1);
    TEST_ASSERT_EQUAL(1, peek(&q));
}

void test_Dequeue(void)
{
    //Creates a queue and then removes the number from the queue
    Queue q; 
    initializeQueue(&q);
    enqueue(&q, 3);
    enqueue(&q, 4);
    dequeue(&q);
    TEST_ASSERT_EQUAL(3, peek(&q));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Enqueue);
RUN_TEST(test_Dequeue);
return UNITY_END();
}