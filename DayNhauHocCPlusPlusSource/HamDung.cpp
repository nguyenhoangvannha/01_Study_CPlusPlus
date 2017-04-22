#include "iostream"
#include "string"
using namespace std;
class Lophoclaptrinh {
public: 
	Lophoclaptrinh() {
		cout << endl << "Ham dung - constructer" << endl;
		ten = "Lop hoc lap trinh";
	}
	Lophoclaptrinh(string tengi)
	{
		ten = tengi;
	}
public:
	void setname(string tengi)
	{
		ten = tengi;
	}
	string getname()
	{
		return ten + " rat de hieu!";
	}
private://chung
	string ten;
};
void main()
{
	Lophoclaptrinh lop;
	//cout << lop.getname() << endl;
	cout << lop.getname() << endl;
	Lophoclaptrinh lop2("lop hoc thu 2");
	cout << lop2.getname() << endl;
	system("pause");
}