#include "stdio.h"
#include "conio.h"
void main()//Hãy luôn c? g?ng b?n nhé!
{
	int that_bai=1;
	while (that_bai<1001)
	{
		printf("\n co gang lam lai %d", that_bai);
		that_bai++;
		if (that_bai == 1000) printf("\n ban la nguoi co y chi ! ");
	}
	_getch();
}