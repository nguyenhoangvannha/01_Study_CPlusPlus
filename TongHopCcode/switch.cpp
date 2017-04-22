#include "stdio.h"
#include "conio.h"
void main()
{
	int n;
menu :
	printf("\nnhap vao so can dich :");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: printf("mot\n"); goto menu;
	case 2: printf("hai\n"); goto menu;
	case 3: printf("ba\n");  goto menu;
	default:printf("\nnhap so tu 1 toi 3\n"); //goto menu;
	}
	_getch();
}