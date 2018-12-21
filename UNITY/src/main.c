#include <stdio.h>
#include <stdlib.h>

#include "operator.h"

int main(int argc, char *argv[])
{
	int a = strtol(argv[1], NULL, 0),
	    b = strtol(argv[2], NULL, 0),
	    s = strtol(argv[3], NULL, 0);

	printf("Hello, World! %d + %d = %d (%d) ?\n",
	       a, b, s, add(a, b));

	return !(add(a, b) == s);
}