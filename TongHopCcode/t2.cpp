#include "stdio.h"
#include "conio.h"
#include "math.h"
#define MAX 9
void swap(int A[], int i, int j)
{
	int tam;
	tam = A[i];
	A[i] = A[j];
	A[j] = tam;
}
void quicksort(int A[], int L, int R)
{
	int x = A[(L + R) / 2];
	int i = L, j = R;
	do
	{
		while (A[i] < x) i++;
		while (A[j] > x) j--;
		if (i <= j)
		{
			swap(A, i, j);
			i++;
			j--;
		}
	} while (i < j);
	if (L < j)quicksort(A, L, j);
	if (i < R) quicksort(A, i, R);
}
void main()
{
	int A[MAX] = { 5,6,7,4,9,1,8,2,3 };
	printf("\n Mang ban dau : ");
	for (int i = 0; i < 9; i++) printf("\t%d", A[i]);
	quicksort(A, 0, 8);
	printf("\n Mang sau  : ");
	for (int i = 0; i < 9; i++) printf("\t%d", A[i]);
	_getch();
}