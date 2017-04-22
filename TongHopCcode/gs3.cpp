#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so tang cay thong Noel  ( tu 10 - 15) : "; cin >> n;
	for (int i = 1; i < n; i++) cout << " "; cout << "/\\" << endl;
	for (int i = 1; i < n - 1; i++) cout << " "; cout << "/**\\" << endl;
	for (int i = 1; i < n - 2; i++) cout << " "; cout << "/'o'o\\" << endl;
	for (int i = 1; i < n - 3; i++) cout << " "; cout << "/*o*o*o\\" << endl;
	for (int i = 1; i < n - 4; i++) cout << " "; cout << "/'o'o'o'o\\" << endl;
	for (int i = 1; i < n - 5; i++) cout << " "; cout << "/*o*MERRY*o\\" << endl;
	for (int i = 1; i < n - 6; i++) cout << " "; cout << "/'o'o'o'o'o'o\\" << endl;
	for (int i = 1; i < n - 7; i++) cout << " "; cout << "/*o*CHRISTMAS*o\\" << endl;
	for (int i = 9; i < n; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j < (n - i + 1); j++) cout << " "; cout << "/";
			for (int j = 1; j < i; j++) cout << "'o"; cout << "\\" << endl;
		}
		else
		{
			for (int j = 1; j < (n - i + 1); j++) cout << " "; cout << "/";
			for (int j = 1; j < i; j++) cout << "*o"; cout << "\\" << endl;
		}
	}
	cout << "/";
	if (n % 2 == 0)
	{
		for (int i = 1; i < (n - 2) / 2; i++) cout << "*o";
		cout << "| |";
		for (int i = 1; i < (n - 2) / 2; i++) cout << "o*";
		cout << "\\" << endl;
	}
	else {
		for (int i = 1; i < (n - 2) / 2; i++) cout << "'o";
		cout << "'| |'";
		for (int i = 1; i < (n - 2) / 2; i++) cout << "o'";
		cout << "\\" << endl;
	}
	for (int i = 1; i <= (n - 3); i++) cout << " ";
	cout << "| |" << endl;
	system("PAUSE");
}