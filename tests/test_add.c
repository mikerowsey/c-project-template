#include "unity.h"
#include "project/math/add.h"

void test_add_positive(void)
{
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

void test_add_negative(void)
{
    TEST_ASSERT_EQUAL_INT(-1, add(-4, 3));
}
