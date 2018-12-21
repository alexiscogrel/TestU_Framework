cmake_minimum_required(VERSION 3.8)
project(TEST_UNITAIRE)

# Add application headers
include_directories( .
	./test_operator
	../src/calculate
	../Unity/src
	)

# Add application sources
set(SOURCES ${SOURCES}
	./main_test.c
    ../src/calculate/operator.c
    ./test_operator/test_operator.c
    ../Unity/src/unity.c
)

add_executable(example ${SOURCES})
