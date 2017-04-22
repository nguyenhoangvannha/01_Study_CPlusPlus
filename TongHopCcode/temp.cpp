#include "stdio.h"
#include "conio.h"
#include "math.h"
void main()
{
	int n, b;
	float a;
menu:
	printf("\n Nhap n:");
	scanf_s("%d", &n);
	a = (int) sqrt(n);
	printf("\n n= %d \t a = sqrt(n) = %f ", n, a);
	if (n != 1997) goto menu;
}