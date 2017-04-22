#include "iostream"
int main()
{
	int A[10] = {};
	for (int i = 0; i < 10; i++)
	{
		A[i] = i;
		std::cout << A[i] << ' ';
	}
	int n = 100;
	/*int* B = new int[n];
	for (int i = 0; i < 100; i++)
	{
		B[i] = i;
	}*/
	int * ptr = A;
	std::cout << "Phan tu thu hai: " << *(ptr + 1) << std::endl;
	fflush(stdin);
	getchar();
	return 0;
}