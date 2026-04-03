#include "unity.h"
#include "project/math/subtract.h"

void test_subtract_positive(void)
{
    TEST_ASSERT_EQUAL_INT(-1, subtract(2, 3));
}

void test_subtract_negative(void)
{
    TEST_ASSERT_EQUAL_INT(7, subtract(3, -4));
}

void test_subtract_zero(void)
{
    TEST_ASSERT_EQUAL_INT(0, subtract(5, 5));
}
