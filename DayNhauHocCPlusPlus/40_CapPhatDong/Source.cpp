/*
* main.cpp
*
*  Created on: Mar 25, 2017
*      Author: nha
*/

#include "iostream"
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++) {
		A[i] = i + 5;
	}
	for (int i = 0; i < n; i++) {
		cout << A[i] << ' ';
	}
	return 0;
}
