#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
int KT_SHT(int n)
{
	int s=0, i=1;
	for (i = 1; i < n;i++)
		if (n%i == 0) s += i;
	if (s <= n)	return 1; else return 0;
}
void main()
{
	int n;
	printf("\n Nhap n: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		if (KT_SHT(i) == 1) printf(" so hoan thien la %d \n", i);
	_getch();
}