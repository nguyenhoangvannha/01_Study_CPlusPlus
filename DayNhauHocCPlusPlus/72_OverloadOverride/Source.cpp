#include "iostream"
////Overload
//int cong(int a, int b);
//int cong(int a, int b, int c);
//int main()
//{
//	return 0;
//}
//int cong(int a, int b)
//{
//
//}
//int cong(int a, int b, int c)
//{
//
//}
class TraiChuoi
{
public:
	void lotVo();
	void lotVo(int a);//OverLoad
	void kichThuoc() { 
		std::cout << "Lon." << std::endl;
	}
	virtual void vi() {
		std::cout << "Ngon." << std::endl;
	}
};
class TraiChuoiCon : public TraiChuoi
{
public:
	void kichThuoc() {//override	
		std::cout << "Nho." << std::endl;
	}
	void vi() {//override + redefine
		std::cout << "Do." << std::endl;
	}
};
int main()
{
	TraiChuoiCon con;
	con.kichThuoc();
	TraiChuoi * TC;
	TC = &con;
	TC->vi();
	return 0;
}