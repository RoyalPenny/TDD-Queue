#include "unity/src/unity.h"
#include "Queue.h"

void setUp(void){}
void tearDown(void){}

void test_Enqueue(void)
{
    enqueue(1);
    TEST_ASSERT_EQUAL(1, peek());
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Enqueue);
return UNITY_END();
}