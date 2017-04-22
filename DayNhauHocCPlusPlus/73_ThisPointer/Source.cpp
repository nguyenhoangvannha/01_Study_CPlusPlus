#include "iostream"
class BanhCanh
{
public:
	BanhCanh(int soTo) {
		this->soTo = soTo;
	}
	void printThisPointer() {
		std::cout << "address of this pointer: " << this << std::endl;
	}
private:
	int soTo;
};
int main()
{
	BanhCanh banhCanhHe(5);
	std::cout << &banhCanhHe << std::endl;
	banhCanhHe.printThisPointer();
	return 0;
}