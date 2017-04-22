/*
* main.cpp
*
*  Created on: Mar 25, 2017
*      Author: nha
*/

#include "iostream"

void swap(int* a, int* b)
{
	//	std::cout << "Inside a,b: " << a << ' ' << b << std::endl;
	//	std::cout << "Inside &a, &b: " << &a << ' ' << &b << std:: endl;
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 3;
	int b = 6;
	//	std::cout << "Outside &a, &b: " << &a << ' ' << &b << std::endl;
	std::cout << "Truoc khi swap: a = " << a << " b = " << b << std::endl;
	swap(&a, &b);
	std::cout << "Sau khi swap: a = " << a << " b = " << b << std::endl;
	return 0;
}


