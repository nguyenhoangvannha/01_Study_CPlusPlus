#include "iostream"
#include "string"
using namespace std;
void main()
{
	int xoiman = 1, banhmi = 2 , pho = 3;
	cout << xoiman  << '=' << &xoiman << endl;
	cout << banhmi << '=' << &banhmi << endl;
	cout << pho << '=' << &pho << endl;
	int *prt = 0;
	prt = &xoiman;
	system("pause");
}