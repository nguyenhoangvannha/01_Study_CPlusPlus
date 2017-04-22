#include <stdio.h>
#include "conio.h"
int next[12061997];
int dump[12061997];
int rslt[12061997];

int lis(int a[], int n) {
	int r = 0, i, j;
	for (i = 1; i <= n; i++)
		if (r == 0 || a[i]>a[dump[r]]) { next[i] = (r == 0 ? 0 : dump[r]); dump[++r] = i; }
		else {
			int ll = 1, rr = r, j = (ll + rr) / 2;
			while (ll != j && j != rr) {
				if (a[i] <= a[dump[j]]) rr = j;
				else ll = j;
				j = (ll + rr) / 2;
			}
			for (j = ll; j <= rr; j++) {
				if (a[i] <= a[dump[j]])
				{
					next[i] = dump[j - 1]; dump[j] = i; break;
				}
			}
		}

		j = r;
		for (i = dump[r]; i != 0; i = next[i]) rslt[j--] = i;
		return r;
}

int n;
int a[12061997];

void main() {
	int i;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) scanf_s("%d", &a[i]);

	int r = lis(a, n);
	printf("%d\n", r);
	printf("\n");
	for (i = 1; i <= r; i++)
		printf("%d\t", a[rslt[i]]);
	_getch();
}