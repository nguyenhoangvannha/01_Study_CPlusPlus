#include "stdio.h"
#include "conio.h"
void main()
{
	int n, i,tram;
	for (i = 9; i <= 1000; i++)
		n = i;
menu:

	{
		
		if (n > 100 && n < 1000)
		{
			tram = n / 100;
			n = n % 100;
			switch (tram)
			{
			case 1: printf("\n mot tram "); goto menu2;
			case 2: printf("\n hai tram "); goto menu2;
			case 3: printf("\n ba tram "); goto menu2;
			case 4: printf("\n bon tram "); goto menu2;
			case 5: printf("\n nam tram "); goto menu2;
			case 6: printf("\n sau tram "); goto menu2;
			case 7: printf("\n bay tram ");  goto menu2;
			case 8: printf("\n tam tram "); goto menu2;
			case 9: printf("\n chin tram "); goto menu2;

			}
		}
		else
		{
			if (n == 100) { printf("mot tram \n"); goto menu; }
			if (n == 1000) { printf("mot nghin \n"); goto menu; }

		}
		if (n<0 || n>1000) {
			printf("\n Ban nhap sai roi phai nhap so trong khoang tu 0 den 1000\n Moi nhap lai");
			goto menu;
		}

	menu1:
		{
			if (n <= 10)
				switch (n)
				{
				case 0: printf("khong\n"); goto menu;
				case 1:printf(" mot\n"); goto menu;
				case 2:printf(" hai\n"); goto menu;
				case 3:printf(" ba\n"); goto menu;
				case 4:printf("bon\n"); goto menu;
				case 5:printf("nam\n"); goto menu;
				case 6:printf("sau\n"); goto menu;
				case 7:printf("bay\n"); goto menu;
				case 8:printf("tam\n"); goto menu;
				case 9:printf("chin\n"); goto menu;
				case 10:printf(" muoi\n"); goto menu;
				}
		}
	menu2:
		{
			int chuc;
			if (n > 10 && n < 100)
				chuc = n / 10;
			n = n % 10;

			switch (chuc)
			{
			case 1: printf("muoi"); goto menu1;
			case 2: printf("hai muoi "); goto menu1;
			case 3: printf("ba muoi "); goto menu1;
			case 4: printf("bon muoi "); goto menu1;
			case 5: printf("nam muoi "); goto menu1;
			case 6: printf("sau muoi "); goto menu1;
			case 7: printf("bay muoi "); goto menu1;
			case 8: printf("tam muoi "); goto menu1;
			case 9: printf("chin muoi "); goto menu1;
			}
		}
	}
	_getch();
}