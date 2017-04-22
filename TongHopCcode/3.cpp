#include <stdio.h>
#include "conio.h"
int main()
{
	int n, a[6] = {3,5,2,1,5,7}, f[6], res = 0, i, j;
	printf("Nhap n = ");
	scanf_s("%d", &n);
	for (i = 0; i<n; i++) 
	{
		scanf_s("%d", &a[i]);
		f[i] = 1;
		for (j = 0; j<i; j++)
			if (a[i] > a[j] && f[j] + 1 > f[i]) f[i] = f[j] + 1;
		if (f[i] > res) res = f[i];
	}
	printf("%d", res);
	return 0;
}