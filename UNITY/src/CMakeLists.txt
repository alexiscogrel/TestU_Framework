cmake_minimum_required(VERSION 3.8)
project(TEST_UNITAIRE)

# Add application headers
include_directories( .
	./calculate
	)

# Add application sources
set(SOURCES ${SOURCES}
	./main.c
    ./calculate/operator.c
)

add_executable(example ${SOURCES})
