#include "stdio.h"
#include "conio.h"
void main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		printf(" \t ");
		if (i % 10== 0) continue;
		printf(" * \t");
	}
	_getch();
}