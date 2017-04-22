#include "iostream"
int main()
{
	std::cout << "int: " << INTMAX_MIN << " den " << INTMAX_MAX << std::endl;
	std::cout << "long: " << LONG_MIN << " den " << LONG_MAX << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	int a = 123;
	long b = 213;
	float c = 123.456;
	double d = 12345.6789;
	bool x = true;
	getchar();
	return 0;
}