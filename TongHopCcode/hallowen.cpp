#include <windows.h>
#include <string.h>
#include <conio.h>
#include "stdio.h"
#include "time.h"
#define MAX 55
void TextColor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

int mang[MAX][MAX] = {
	{ 1,1,0,0,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0 },
	{ 1,1,1,0,1,1,1,0,1,0,0,0,0,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0 },
	{ 1,1,0,1,0,1,1,0,1,0,0,0,0,0,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0 },
	{ 1,1,0,0,0,1,1,0,1,1,1,1,0,0,1,1,0,0,1,0,1,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0 },
	{ 1,1,0,0,0,1,1,0,1,1,1,1,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0 },
	{ 1,1,0,0,0,1,1,0,1,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0 },
	{ 1,1,0,0,0,1,1,0,1,0,0,0,0,0,1,1,0,1,0,0,1,1,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0 },
	{ 1,1,0,0,0,1,1,0,1,1,1,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 1,1,0,0,0,1,0,1,0,0,0,1,0,1,1,1,0,0,1,0,0,1,1,0,1,1,1,1,1,0,1,0,1,0,1,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0 },
	{ 1,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,0,1,0,0,0,1,1,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0 },
	{ 1,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0 },
	{ 1,1,0,0,0,0,0,1,1,1,1,1,0,1,1,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0 },
	{ 1,1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0 },
	{ 1,1,1,1,1,1,0,1,0,0,0,1,0,1,0,1,0,0,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0 },
	{ 0,1,1,1,1,0,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0 } };
int main()
{
	int x=2;
	srand(time(NULL));
	for (int n = 1; n <= 10; n++)
	{
		Sleep(1);
		for (int i = 0; i<MAX; i++)
		{
			Sleep(1);
			for (int j = 0; j<MAX; j++)
			{
				Sleep(1);
				/*x = rand() % (16 - 1 + 1) + 1; // DOAN CODE NAY DE NHAY NHIEU MAU NEU DUNG CODE NAY THI HAY XOA DONG 69
				switch (x)
				{
				case 1: system("color 01"); break;
				case 2: system("color 02"); break;
				case 3: system("color 03"); break;
				case 4: system("color 04"); break;
				case 5: system("color 05"); break;
				case 6: system("color 06"); break;
				case 7: system("color 07"); break;
				case 8: system("color 08"); break;
				case 9: system("color 09"); break;
				case 10: system("color A"); break;
				case 11: system("color B"); break;
				case 12: system("color C"); break;
				case 13: system("color D"); break;
				case 14: system("color E"); break;
				case 15: system("color F"); break;
				case 16: system("color E"); break;
				case 17: system("color 2"); break;
				case 18: system("color D"); break;
				case 19: system("color 5"); break;
				}*/
				if (i % 2 == 0) system("color C"); else system("color A");
				if (mang[i][j])
				{
					printf("\3");
				}
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	_getch();
	return 0;
}
/*0 = Black       8 = Gray
1 = Blue        9 = Light Blue
2 = Green       A = Light Green
3 = Aqua        B = Light Aqua
4 = Red         C = Light Red
5 = Purple      D = Light Purple
6 = Yellow      E = Light Yellow
7 = White       F = Bright White*/