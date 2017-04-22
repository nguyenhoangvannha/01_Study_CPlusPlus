#include <windows.h>
#include <fstream> 
#include <iostream> 
#include <process.h> 
#include <string.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <ctype.h> 
#include <conio.h> 
#include <dos.h> 
void TextColor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void main()
{
	TextColor(140);//s? 140 d?a vào b?ng màu
	printf("Xin chao moi nguoi den voi tranhanhuy.wordpress.com!");
	TextColor(23);//s? 140 d?a vào b?ng màu
	printf("Xin chao moi nguoi den voi tranhanhuy.wordpress.com!");
	_getch();
}