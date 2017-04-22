
#include "stdlib.h"
#include "time.h"
#include "conio.h"
#include "stdio.h"

void NhapMang(int a[], int &n)
{
	int x;
	srand(time(NULL));
	printf("Nhap so phan tu :\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		x= (rand() % (1000000000- 1 + 1)) + 1;
		a[i] = x;
	}
	_getch();
}
void XuatMang(int a[], int n)
{
	printf("\n Noi dung mang :");
	for (int i = 1; i <= n; i++)
		printf("%d \t ", a[i]);
}
void main()
{
	int a[1000], n;
	NhapMang(a, n);
	XuatMang(a, n);
	_getch();
}

