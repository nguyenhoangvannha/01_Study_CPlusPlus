#include "stdio.h"
#include "conio.h"
#include "time.h"
#include "stdlib.h"
#define max 10
typedef int MANG2D[100][100];
void nhapmang(MANG2D a, int &m, int &n)
{
	srand(time(NULL));
	m = rand() % (max - 1 + 1) + 1;
	printf(" m = %d", m);
	n = rand() % (max - 1 + 1) + 1;
	printf(" n= %d \n\n ", n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (100 - 1 + 1) + 1;
}
void xuatmang2d(MANG2D a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) printf(" %d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
}
void SapTang(MANG2D a, int d, int c)
{
	for (int i = 0; i <= d*c - 1; i++)
		for (int j = 0; j <= d*c - 1; j++)
		{
			//printf("  Bat dau Buoc i = %d   j= %d \n ", i, j);
			if (a[i / c][i%c] < a[j / c][j%c])
			{
				//printf("a[i / c][i%c]= %d  a[j / c][j%c] =%d \n  ", a[i / c][i%c], a[j / c][j%c]);
				int tmp = a[i / c][i%c];
				//printf(" tmp = a[i / c][i%c] = %d \n ", tmp = a[i / c][i%c]);
				a[i / c][i%c] = a[j / c][j%c];
				//printf("a[i / c][i%c] = a[j / c][j%c] = %d \n", a[j / c][j%c]);
				a[j / c][j%c] = tmp;
				//printf("a[j / c][j%c] = tmp = %d ", tmp);
			}
			//printf("  HET BUOC \n\n\n ");
		}
}
void main()
{
	MANG2D a;
	int m, n;
	nhapmang(a, m, n);
	xuatmang2d(a, m, n);
	SapTang(a, m, n);
	xuatmang2d(a, m, n);
	_getch();
}