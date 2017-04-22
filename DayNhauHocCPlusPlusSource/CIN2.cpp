#include "iostream"
#include "string"
using namespace std;
void main()
{
	string hoten,hoten2;
	cout << "Nhap hoa ten cua ban :";
	cin >> hoten;
	cout << endl << hoten << endl;
	//fflush(stdin); // lam cho doan code duoi chay neu khong co thi chay sai;;; xoa enter
	cin.ignore(1);//bo di 1 bien luu trong cin
	cout << "Nhap hoa ten cua ban :";
	getline(cin,hoten2);
	cout << endl << hoten2 << endl;
	system("pause");
}