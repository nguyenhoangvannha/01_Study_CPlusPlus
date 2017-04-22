#include "iostream"
#include "string"
using namespace std;
void main()
{
	int aa = 5;
	int & rr = aa;
	rr = 10;
	cout << rr;
	system("pause");
}