#include "iostream"
using namespace std;
void main()
{
	char ten[20] = {};
	cout << "Nhap ten cua ban : ";
	cin >> ten; 
	int ngay, thang, nam;
	cout << endl << "Nhap ngay thang nam sinh cua ban" << endl;
	cin >> ngay >> thang >> nam;
	cout << "Ban sinh ngay "
		<< ngay << '-'
		<< thang << '-'
		<< nam << endl;
	system("pause");
}