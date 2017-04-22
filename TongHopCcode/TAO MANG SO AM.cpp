#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "time.h"
#define MAX 1000
void XuatMang(int a[], int n)
{
	printf("\n Mang :");
	for (int i = 0; i < n; i++)
		printf("\t%d", a[i]);
}
void main()
{
	int i, x, n;
	int a[MAX] = {};
menu:
	srand(time(NULL));
	printf("\n Nhap so phan tu :");
	scanf_s("%d", &n);
	for (i = 0; i <n; i++)
	{
		x = (rand() % ((-1) - 10 )) -10;
		a[i] = x;
	}
	XuatMang(a, n);
	if (n != 1997) goto menu;
}