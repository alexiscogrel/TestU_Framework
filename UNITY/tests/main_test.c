#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "unity.h"
#include "test_operator.h"

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_add);
	return UNITY_END();
}