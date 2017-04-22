#include "iostream"
#include "string"
using namespace std;
void main()
{
	int mang1C[3] = { 1,2,3 };
	int *controint;
	controint = mang1C;
	cout << controint << endl;
	cout << &mang1C[0] << endl;
	system("pause");
}