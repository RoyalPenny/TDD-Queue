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

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Enqueue);
return UNITY_END();
}