#include "stdio.h"
#include "conio.h"
typedef int MANG2D[100][100];
void nhapmang2d(MANG2D a,int &d,int &c)
{
	printf("\n Nhap so dong ");
	scanf_s("%d", &d);
	printf("\n Nhap so cot  ");
	scanf_s("%d", &c);
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			printf(" \n Nhap phan tu a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
}
void xuatmang2d(MANG2D a, int d, int c)
{
	printf(" mang ban nhap la \n");
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++) printf(" %d ", a[i][j]);
		printf("\n");
	}
}
void main()
{
	MANG2D b;
	int d, c;
	nhapmang2d(b, d, c);
	xuatmang2d(b, d, c);
	_getch();
}