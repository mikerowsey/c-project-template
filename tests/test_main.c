#include "unity.h"

void setUp(void)    {}
void tearDown(void) {}

void test_add_positive(void);
void test_add_negative(void);
void test_subtract_positive(void);
void test_subtract_negative(void);
void test_subtract_zero(void);

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_positive);
    RUN_TEST(test_add_negative);
    RUN_TEST(test_subtract_positive);
    RUN_TEST(test_subtract_negative);
    RUN_TEST(test_subtract_zero);
    return UNITY_END();
}
