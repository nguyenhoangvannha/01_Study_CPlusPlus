#include <stdio.h>
#include <conio.h>


int main() {
	int a[10] = { 7, 3, 5, 9, 6, 8, 17, 11, 13, 15 };
	int n = 1;
	for (int i = 0; i<9;) {
		int t = a[i];
		printf("Day %d: %d ", n, t);
		int j;
		for (j = i + 1; j<10; j++) {
			if (t <= a[j])
			{
				t = a[j];
				printf("%d ", t);
			}
			else
				break;
		}
		i = j;
		n++;
		printf("\n");

	}
	_getch();
	return 0;
}