#include "stdio.h"
#include "conio.h"
void main()
{
	float m, n;
	printf("\nNhap vao so thu nhat m =");
	scanf_s("%f", &m);
	printf("\nNhap vao so thu hai n =");
	scanf_s("%f", &n);
	if (m > n) printf("%0.1f lon hon %0.1f",m,n);
	else {
		if (m == n) printf(" %0.1f bang %0.1f",m,n);
		if (m < n) printf(" %0.1f nho hon %0.1f",m,n);
		}
	_getch();
}