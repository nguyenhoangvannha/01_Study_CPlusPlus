#include "stdio.h"
#include "conio.h"
void main()
{
	int i,nam;
	float goc, tlai = 0, lai;
menu:
	{printf("\nNhap so tien goc cua ban : ");
	scanf_s("%f", &goc);
	printf("Nhap so nam ban muon gui tien : ");
	scanf_s("%d", &nam);
	for (i = 1; i <= nam; i++)
	{
		lai = goc * 8 / 100;
		goc = goc + lai;
		tlai = tlai + lai;
		printf("So tien ban co duoc sau %d nam gui tiet kiem la : %0.3f", i, goc);
		printf("\n\t\t\t\t\tlai la : %0.3f \n", tlai);
	}
	printf("So tien ban co duoc sau %d nam gui tiet kiem la : %0.3f", nam, goc);
	printf("\nSo tien lai cua ban sau %d nam la : %0.3f \n", nam, tlai);
	goto menu;
	}
	_getch();
}