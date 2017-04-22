#include "stdio.h"
#include "conio.h"
void main()
{
	printf("hello world \n");
	int i;
	int so_chan[5] = { 0,2,4,6,8 };
	int	so_le[5] = { 1,3,5,7,9 };
	int	bang_diem[10] = {};
	int bang_diem_rong[10];
	printf("\nSo chan dau tien la =%d", so_chan[0]);
	printf("\nSo le cuoi cung la =%d", so_le[4]);
	for (i = 0; i <= 4; i++)
		printf("\nSo le thu %d la : %d", i + 1, so_le[i]);
	for (i = 0; i <= 9; i++)
		printf("\nDiem cua ban %d la : %d", i + 1, bang_diem[i]);
	for (i = 0; i <= 9; i++)
		printf("\nDiem cua ban %d la : %d", i + 1, bang_diem_rong[i]);
	_getch();
}