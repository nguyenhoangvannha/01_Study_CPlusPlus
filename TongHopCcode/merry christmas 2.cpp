#include<iostream>
#include<Windows.h>
using namespace std;

enum
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	PURPLE,
	GRAY,
	WHITE,
	LIGHTGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTPURPLE,
	LIGHTYELLOW,
	LIGHTWHITE
};
void textcolor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void SetBGColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
int main()
{
	textcolor(LIGHTRED);
	//SetBGColor(CYAN);
	cout << "                                                                               " << endl;
	cout << "                  @@          @@                                               " << endl;
	cout << "                  @@@        @@@                                               " << endl;
	cout << "                  @@@@      @@@@   @@@@  @@ @@@  @@ @@@ @@      @@             " << endl;
	cout << "                  @@ @@    @@ @@  @@  @@ @@@  @@ @@@  @@ @@    @@              " << endl;
	cout << "                  @@  @@  @@  @@ @@@@@@  @@      @@       @@  @@               " << endl;
	cout << "                  @@   @@@@   @@  @@     @@      @@        @@@@                " << endl;
	cout << "                  @@    @@    @@   @@@@  @@      @@         @@                 " << endl;
	cout << "                                                            @@                 " << endl;
	textcolor(LIGHTGREEN);
	cout << "        @@@   @@              @@          @@                                   " << endl;
	cout << "      @@   @@ @@                          @@                                   " << endl;
	cout << "     @@       @@ @@@  @@ @@@  @@   @@@@ @@@@@@  @@ @@  @@      @@@    @@@@     " << endl;
	cout << "     @@       @@@  @@ @@@  @@ @@  @@      @@    @@@  @@  @@  @@  @@  @@        " << endl;
	cout << "     @@       @@   @@ @@      @@   @@@    @@    @@   @@  @@ @@   @@   @@@      " << endl;
	cout << "      @@   @@ @@   @@ @@      @@     @@   @@ @@ @@       @@ @@   @@     @@     " << endl;
	cout << "        @@@   @@   @@ @@       @@ @@@@     @@   @@       @@  @@@@ @@ @@@@      " << endl;
	cout << "                                                                               " << endl;
	textcolor(LIGHTCYAN);
	//SetBGColor(CYAN);
	cout << "                                                                               " << endl;
	cout << "                  @@          @@                                               " << endl;
	cout << "                  @@@        @@@                                               " << endl;
	cout << "                  @@@@      @@@@   @@@@  @@ @@@  @@ @@@ @@      @@             " << endl;
	cout << "                  @@ @@    @@ @@  @@  @@ @@@  @@ @@@  @@ @@    @@              " << endl;
	cout << "                  @@  @@  @@  @@ @@@@@@  @@      @@       @@  @@               " << endl;
	cout << "                  @@   @@@@   @@  @@     @@      @@        @@@@                " << endl;
	cout << "                  @@    @@    @@   @@@@  @@      @@         @@                 " << endl;
	cout << "                                                            @@                 " << endl;
	textcolor(LIGHTPURPLE);
	cout << "        @@@   @@              @@          @@                                   " << endl;
	cout << "      @@   @@ @@                          @@                                   " << endl;
	cout << "     @@       @@ @@@  @@ @@@  @@   @@@@ @@@@@@  @@ @@  @@      @@@    @@@@     " << endl;
	cout << "     @@       @@@  @@ @@@  @@ @@  @@      @@    @@@  @@  @@  @@  @@  @@        " << endl;
	cout << "     @@       @@   @@ @@      @@   @@@    @@    @@   @@  @@ @@   @@   @@@      " << endl;
	cout << "      @@   @@ @@   @@ @@      @@     @@   @@ @@ @@       @@ @@   @@     @@     " << endl;
	cout << "        @@@   @@   @@ @@       @@ @@@@     @@   @@       @@  @@@@ @@ @@@@      " << endl;
	cout << "                                                                               " << endl;
	/*textcolor(LIGHTGREEN);
	cout << "      @@       @@																" << endl;
	cout << "      @@       @@																" << endl;
	cout << "      @@       @@     @@@@    @@@@@@@	@@@@@@@	 @@      @@						" << endl;
	cout << "      @@@@@@@@@@@   @@  @@    @@    @@	@@    @@ @@    @@ 					    " << endl;
	cout << "      @@       @@  @@   @@    @@    @@	@@    @@  @@  @@  					    " << endl;
	cout << "      @@       @@  @@   @@    @@ @@@	@@ @@@	   @@@@   					    " << endl;
	cout << "      @@       @@   @@ @@ @@  @@		@@		    @@    						" << endl;
	cout << "                              @@       @@          @@                          " << endl;*/
	
	textcolor(LIGHTGRAY);
	Beep(783, 400); /*Beep(783,400)*/; Beep(1318, 350); Beep(1174, 400); Beep(1046, 400); Beep(783, 1000); Beep(783, 400); Beep(783, 400); Beep(1318, 350); Beep(1174, 400); Beep(1046, 400); Beep(880, 1000);
	Beep(880, 400); Beep(880, 400); Beep(1396, 350); Beep(1318, 400); Beep(1174, 400); Beep(987, 1000); Beep(987, 400); Beep(1567, 400); Beep(1567, 350); Beep(1396, 400); Beep(1174, 400); Beep(1318, 1000);
	Beep(783, 400); Beep(783, 400); Beep(1318, 350); Beep(1174, 400); Beep(1046, 400); Beep(783, 1000); Beep(783, 400); Beep(783, 400); Beep(1318, 350); Beep(1174, 400); Beep(1046, 400); Beep(880, 1000);
	Beep(880, 400); Beep(880, 400); Beep(1396, 400); Beep(1318, 400); Beep(1174, 400); Beep(1567, 500); Beep(1567, 200); Beep(1567, 250); Beep(1567, 400); Beep(1760, 400); Beep(1567, 400); Beep(1396, 400); Beep(1174, 500); Beep(1046, 800);
	Beep(1318, 350); Beep(1318, 350); Beep(1318, 700); Beep(1318, 350); Beep(1318, 350); Beep(1318, 700); Beep(1318, 350); Beep(1567, 350); Beep(1046, 500); Beep(1174, 200); Beep(1318, 700);
	Beep(1396, 350); Beep(1396, 350); Beep(1396, 600); Beep(1396, 200); Beep(1396, 400); Beep(1318, 400); Beep(1318, 500); Beep(1318, 200); Beep(1318, 200); Beep(1318, 400); Beep(1174, 400); Beep(1174, 400); Beep(1318, 500); Beep(1174, 400); Beep(1567, 700);
	Beep(1318, 350); Beep(1318, 350); Beep(1318, 700); Beep(1318, 350); Beep(1318, 350); Beep(1318, 700); Beep(1318, 350); Beep(1567, 350); Beep(1046, 500); Beep(1174, 200); Beep(1318, 700);
	Beep(1396, 350); Beep(1396, 350); Beep(1396, 700); Beep(1396, 200); Beep(1396, 300); Beep(1318, 300); Beep(1318, 600); Beep(1318, 200); Beep(1318, 200); Beep(1567, 300); Beep(1567, 400); Beep(1396, 300); Beep(1174, 300); Beep(1046, 700);
	cin.get();
	SetBGColor(BLACK);
	printf("\n");
	main();
	system("Pause");
	return 0;
}