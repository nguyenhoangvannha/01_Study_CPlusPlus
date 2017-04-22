#include "stdio.h"
#include "conio.h"
#include "string.h"
void nhapchuoi(char s)
{
	printf("Nhap ten: ");
	scanf_s("%s",s);
	//gets_s(s);
	printf("\nXin chao: ");
	puts(s);
	printf("\n do dai chuoi la %d", strlen(s));
}
void main()
{
	char a[14];
	nhapchuoi(a);
	_getch();
}