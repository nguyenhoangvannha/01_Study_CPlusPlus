#include "stdio.h"
#include "conio.h"
int DemSoKT(char s1)
{
	int i = 0,skt;
	while (s1[i] != '\0') i++;
	return i;
}
void ChuanHoaSo(char s1,char s2)
{
	int s1, s2, skt, i, j;
	printf("\n Nhap so chua chuan hoa :");
	scanf_s("%s", s1);
	skt=DemSoKT(s1);
	for (i = skt; i >= 0; i++)
		for (j = 0; j <= skt;j++)

	_getch();

}