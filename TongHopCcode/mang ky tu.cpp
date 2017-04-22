#include "stdio.h"
#include "conio.h"
void main()
{
	int i=0;
	char mkt[4] = { 'a','b','c','d' };
	printf("\nKy tu dau tien trong mang la : %c", mkt[0]);
	while (i <= 3)
	{
		printf("\nKy tu thu %d trong mang la : %c", i + 1, mkt[i]);
		i++;
	}
	_getch();
}