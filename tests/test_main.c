#include "unity.h"

void test_add_positive(void);
void test_add_negative(void);
void test_subtract(void);

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_positive);
    RUN_TEST(test_add_negative);
    RUN_TEST(test_subtract);
    return UNITY_END();
}
