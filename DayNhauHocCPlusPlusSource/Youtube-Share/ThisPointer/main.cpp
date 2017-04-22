#include <iostream>
// this pointer in C++
class BanhCanh {
public:
	BanhCanh(int soTo){
		this->mSoTo = soTo;
	}
	void PrintThisPointer(){
		std::cout << this << std::endl;
	}
private:
	int mSoTo;
};
int main()
{
	BanhCanh banhCanhHe(1);
	std::cout << &banhCanhHe << std::endl;
	banhCanhHe.PrintThisPointer();

	BanhCanh banhCanhThitHeo(2);
	std::cout << &banhCanhThitHeo << std::endl;
	banhCanhThitHeo.PrintThisPointer();
	return 0;
}
