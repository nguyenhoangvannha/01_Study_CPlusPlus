#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

#define C 500
#define T 220

#define Do C
#define Re Do + T
#define Mi Re + T
#define Fa Mi + T / 2
#define Son Fa + T
#define La Son + T
#define Si La + T
#define Doo Si + T / 2

#define LENGTH 220
#define MIDLENGTH LENGTH / 2
#define DBLC 6 * T

int JingleBellMid();

void veHinh(char* FileInput);
void clrscr(void);
void gotoxy(short x, short y);
void setFontSize(int FontSize);
void resizeConsole(short X, short Y);



void veHinh(char* FileInput1) {
	ifstream fi(FileInput1);

	//image -> ascii http://picascii.com/
	char t;
	setFontSize(3);
	while (!fi.eof()) {

		fi.read((char*)&t, sizeof(t));
		cout << t;
	}
	fi.close();
}

int JingleBellMid() {
	Beep(Son, LENGTH);

	Beep(Son, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);
	Beep(Do + DBLC, LENGTH);

	Beep(Son, LENGTH * 3);
	Beep(Son, LENGTH);

	Beep(Son, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);
	Beep(Do + DBLC, LENGTH);

	Beep(La, LENGTH * 3);
	Beep(La, LENGTH);

	Beep(La, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Si, LENGTH * 2);
	Beep(Si, LENGTH * 2);

	Beep(Son + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Mi + DBLC, LENGTH * 3);
	Beep(Son, LENGTH);

	Beep(Son, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);
	Beep(Doo, LENGTH);

	Beep(Son, LENGTH * 3);
	Beep(Son, LENGTH);

	Beep(Son, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);
	Beep(Doo, LENGTH);

	Beep(La, LENGTH * 3);
	Beep(La, LENGTH);

	Beep(La, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Son + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);

	Beep(La + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Doo, LENGTH * 4);

	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH * 2);

	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH * 2);

	Beep(Mi + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Doo, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Mi + DBLC, LENGTH * 4);

	Beep(Fa + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);

	Beep(Fa + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);

	Beep(Mi + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);

	Beep(Re + DBLC, LENGTH * 2);
	Beep(Son + DBLC, LENGTH * 2);

	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH * 2);

	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH * 2);

	Beep(Mi + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Do + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Mi + DBLC, LENGTH * 4);

	Beep(Fa + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);

	Beep(Fa + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);
	Beep(Mi + DBLC, LENGTH);

	Beep(Son + DBLC, LENGTH);
	Beep(Son + DBLC, LENGTH);
	Beep(Fa + DBLC, LENGTH);
	Beep(Re + DBLC, LENGTH);

	Beep(Doo, LENGTH * 4);

	return 0;
}

void clrscr(void)
{
	CONSOLE_SCREEN_BUFFER_INFO  csbiInfo;
	HANDLE  hConsoleOut;
	COORD   Home = { 0, 0 };
	DWORD   dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}

void gotoxy(short x, short y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void setFontSize(int FontSize)
{
	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	info.dwFontSize.Y = FontSize; // leave X as zero
	info.FontWeight = FW_NORMAL;
	wcscpy_s(info.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

void resizeConsole(short X, short Y) {
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

								//MoveWindow(window_handle, x, y, width, height, redraw_window);
	MoveWindow(console, r.left, r.top, X, Y, TRUE);
}
void main() {
	 system("color C");//system("color A");
	//veHinh("tree.txt");
	veHinh("D:\\YOUTUBE\\Source\\ConsoleApplication1\\ConsoleApplication1\\tree.txt");

	resizeConsole(400, 400);
	
	JingleBellMid();

	cin.get();
}