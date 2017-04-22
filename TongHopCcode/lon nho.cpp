#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "conio.h"
void main()
{
	srand (time(NULL));
	int n, x;
	n = (rand() % (100 - 2 + 1)) + 2;
	printf("\n Dap an %d:",n);
	do
	{
		printf("\n Nhap vao so ban doan :");
		scanf_s("%d", &x);
		if (x > n) printf("LON HON ! \n");
		if (x < n) printf("NHO HON ! \n");
		if (x == n) printf("XIN CHUC MUNG  ! \n");
	} 
	while (x != n);
	_getch();
	
	if (/*?i?u ki?n*/)
	{
		//m?t ho?c nhi?u câu l?nh
	}
	else 
	{
		//m?t ho?c nhi?u câu l?nh
	}
}

