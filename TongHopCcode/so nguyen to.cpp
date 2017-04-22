//Nh?p s? nguyên d??ng n.Li?t kê t?t c? các s? nguyên t? nh? h?n n.
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
int SNT(int n)
{
	if (n == 2) return 1;
	if ((n % 2 == 0) || (n < 2)) return 0;
	for (int i = 3; i <= sqrt((int)n); i += 2)
		if (n%i == 0) return 0;
	return 1;
}
void main()
{
	int n;
menu:
	printf("\n Nhap n: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		if (SNT(i) == 1) printf("\t %d", i);
	if (n == 12) exit(0); else goto menu;
}