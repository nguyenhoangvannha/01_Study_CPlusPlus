#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "time.h"
#define MAX 1000
void XuatMang(int a[], int n)
{
	printf("\n Mang :");
	for (int i = 0; i < n; i++)
		printf("\t%d", a[i]);
}
void main()
{
	int i, n,max =10,min =0;
	int a[MAX] = {};
menu:
	//srand(time(NULL));
	printf("\n Nhap so phan tu :");
	scanf_s("%d", &n);
	for (i = 0; i <n; i++)
	{
	   printf("\n %d %d = %d", min, max,a[i-1]);
		//a[i] = (rand() % max - min) + max;
	    a[i] = min + rand()% (max-min+1) ;
		min = max + 1;
		max += 11;
	}
	XuatMang(a, n);
	if (n != 1997) goto menu;
}