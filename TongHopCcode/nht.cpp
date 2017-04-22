#include "stdio.h"
#include "conio.h"
void main()
{
	int i=0;
	char c;
	char ten[33] = "";
	printf("\n Nhap vao ten cua ban : ");
	do
	{
		c = getchar();
		ten[i] = c;
		i++;
	} while (c != '\n');
	printf("\n Xin chao %s ", ten);
	_getch();
	


}