#include <iostream>
// declare = khai bao
// signature
int cong(int , int , int = 0);
int cong(const int *, int);
void cong(float , float);

int main()
{
	std::cout << cong(1,2) << std::endl;
	int banh_xeo =3;
	int * con_tro = &banh_xeo;
	std::cout << cong(con_tro,2) <<std::endl;
	cong((float)1.2,2.3);
}
// define = dinh nghia
int cong(int a, int b, int)
{
	return a+b;
}

int cong( const int * a, int b)
{
	return *a + b;
}

void cong(float a, float b)
{
	std::cout << a + b << std::endl;
}
