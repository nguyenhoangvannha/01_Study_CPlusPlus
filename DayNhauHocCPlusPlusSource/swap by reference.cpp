#include "iostream"
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void main()
{
	int sochan = 4;
	int sole = 5;
	int & rrchan = sochan;
	int & rrle = sole;
	swap(rrchan, rrle);
	std::cout << "sochan = " << sochan << std::endl;
	std::cout << "sole = " << sole << std::endl;
	system("pause");
}