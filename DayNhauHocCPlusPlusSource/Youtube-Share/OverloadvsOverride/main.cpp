#include <iostream>
using namespace std;
// Overload vs Override
class TraiChuoi {
	void LotVo(); // overload
	void LotVo(int a);// overload
public:
	void KichThuoc(){
		cout << "bu\n";
	}
	virtual void Vi() = 0; // pure virtual
};
class TraiChuoiCon : public TraiChuoi {
public:
	void KichThuoc(){ // override
		cout << "nho\n";
	}
	void Vi(){ // override luon, redefine
		cout << "Chat\n";
	}
};
int main(){
	TraiChuoiCon con;
	con.KichThuoc();
	TraiChuoi * tc;
	tc = &con;
	tc->Vi();
}
