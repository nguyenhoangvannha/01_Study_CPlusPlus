#include "iostream"
#include "string"
using namespace std;
class Lophoclaptrinh {
public:
	void setname(string tengi)
	{
		ten = tengi;
	}
	string getname()
	{
		return ten;
	}
private://chung
	string ten;
};
void main()
{
	Lophoclaptrinh lophoc; //thuc the
	lophoc.setname("Lop hoc lap trinh c++");
	cout << lophoc.getname() << endl;
	system("pause");
}