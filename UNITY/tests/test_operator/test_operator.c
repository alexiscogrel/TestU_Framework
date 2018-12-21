#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "unity.h"
#include "operator.h"


void test_add(void)
{
	int result;

	result = add(1,2);
	TEST_ASSERT_EQUAL_INT(5,result);
}