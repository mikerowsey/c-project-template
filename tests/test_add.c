#include "unity.h"
#include "project/math/add.h"
#include "project/math/subtract.h"

void setUp(void)    {}
void tearDown(void) {}

void test_add_positive(void)
{
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

void test_add_negative(void)
{
    TEST_ASSERT_EQUAL_INT(-1, add(-4, 3));
}

void test_subtract(void)
{
    TEST_ASSERT_EQUAL_INT(-1, subtract(2, 3));
}
