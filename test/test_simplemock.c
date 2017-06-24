#include "unity.h"
#include "simplemock.h"
#include "mock_multiplydivide.h"
#include <stdio.h>
void setUp(void)
{
}

void tearDown(void)
{
}

void test_simplemock_addMultiplyAndDivide(void)
{
  int x;
    multiply_ExpectAndReturn(2,3,5);
    divide_ExpectAndReturn(10,5,2);
    x=addMultiplyAndDivide(2,3,10,5);
    TEST_ASSERT_EQUAL(x,9);
    }
