#include "stdio.h"
#include "conio.h"
#include "math.h"
int UCLN(int a, int b)
{
	int x, y, tam;
	if (a > b) { x = a; y = b; }
	else { x = b; y = a; }
	while (y != 0)
	{
		tam = y;
		y = x%y;
		x = tam;
	}
	return x;
}
void main()
{
	int a, b;
menu:
	printf("\n Nhap a va b : ");
	scanf_s("%d%d", &a, &b);
	printf("\t UCLN CUA A B LA : %d", UCLN(a, b));
	if (a != 1997) goto menu;
}