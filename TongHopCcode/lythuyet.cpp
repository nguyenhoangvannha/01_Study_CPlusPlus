#include <stdio.h>
#include "conio.h"
#define MAX 100

void NhapMang(int a[], int &n)
{
	printf("Nhap so phan tu :\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap phan tu thu a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	
}
void XuatMang(int a[], int n)
{
	printf("\n Noi dung mang :");
	for (int i = 1; i<= n; i++)
		printf("%d \t ", a[i]);
}
void main()
{
	int a[MAX], n;
	NhapMang(a, n);
	XuatMang(a, n);
	_getch();
}