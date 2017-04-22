#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{

	int n;
	srand (time(NULL));
	n = (rand() % (10000000 - 99999 + 1)) + 99999;
	printf("Hello world! %d\n", n);

}