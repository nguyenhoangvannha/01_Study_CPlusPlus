#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char hoten[1000] = {};
	printf("Nhap ten: ");
	gets_s(hoten);
	printf("\nXin chao: ");
	puts(hoten);
	printf("\n do dai chuoi la %d", strlen(hoten));
	_getch();
}