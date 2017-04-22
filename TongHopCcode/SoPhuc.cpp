#include "stdio.h"
#include "conio.h"
typedef struct
	{
	float thuc;
	float ao;
	}SoPhuc;
void nhap(SoPhuc &sp)
{
	printf("\n Nhap phan thuc: ");
	scanf_s("%f", &sp.thuc);
	printf("\n Nhap phan ao: ");
	scanf_s("%f", &sp.ao);
}
void Xuat(SoPhuc sp)
{
	printf("\nSo Phuc : %0.1f + %0.1fi", sp.thuc, sp.ao);
}
SoPhuc Tong(SoPhuc d1, SoPhuc d2)
{
	SoPhuc temp;
	temp.thuc = d1.thuc + d2.thuc;
	temp.ao = d1.ao + d2.ao;
	return temp;
}
SoPhuc Hieu(SoPhuc a, SoPhuc b)
{
	SoPhuc temp;
	temp.thuc = a.thuc - b.thuc;
	temp.ao = a.ao - b.ao;
	return temp;
}
void main()
{
	SoPhuc A, B, AB;
	printf("=============================");
	nhap(A);
	Xuat(A);
	nhap(B);
	Xuat(B);
	printf("\n=============================");
	AB = Tong(A, B);
	printf("Tong la:");
	Xuat(AB);
	AB = Hieu(A, B);
	printf("\nHieu la:");
	Xuat(AB);
	_getch();
}