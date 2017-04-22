#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
	int i;
	char mktcn[] = "nguyen hoang van nha\0";
	printf("\nmang ky tu chuyen biet :%s", mktcn);
	printf("\nky tu dau tien trong mktcn :%c", mktcn[0]);
	printf("\nky tu cuoi cung trong mktcn :%c", mktcn[strlen(mktcn)-1]);
	printf("\n So phan tu cua mang la %d", strlen(mktcn));
	_getch();
}