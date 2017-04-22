//in bang cuu chuong
#include "stdio.h"
#include "conio.h"
void main()
{
	int i, j, k;
	for (j = 1; j <= 10; j++)
	{
		for (i = 2; i <= 5; i++)
			//for (j = 1; j <= 10; j++)
			printf(" %d * %d =%d \t", i, j, i*j);
		printf("\n");
	}
	for (j = 1; j <= 10; j++)
	{
		for (i = 6; i <= 10; i++)
			//for (j = 1; j <= 10; j++)
			printf(" %d * %d =%d \t", i, j, i*j);
		printf("\n");
	}
	_getch();
}