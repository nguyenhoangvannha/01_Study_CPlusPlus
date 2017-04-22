#include <stdio.h>
#include "conio.h"
#define MAX 100
#include "stdlib.h"
#include "time.h"

void NhapMang(int a[], int &n)
{
	printf("Nhap so phan tu :\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n;j++)
		{ 
			time(0);
			int x = 0 + rand() % 201;
			srand(0);
			scanf_s("%d", &a[i]);
		}
		
	}

}
void XuatMang(int a[], int n)
{
	printf("\n Noi dung mang :");
	for (int i = 1; i <= n; i++)
		printf("%d \t ", a[i]);
}
void main()
{
	int a[MAX], n;
	NhapMang(a, n);
	XuatMang(a, n);
	_getch();
}