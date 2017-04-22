#include "iostream"
void tuoi10NamSau(int);
int main()
{
	int tuoi = 0;
	std::cout << "Nhap tuoi hien tai: ";
	std::cin >> tuoi;
	tuoi10NamSau(tuoi);
	return 0;
}
void tuoi10NamSau(int tuoi = 100)
{
	std::cout << "Tuoi 10 nam sau: " << tuoi + 10 << std::endl;
}