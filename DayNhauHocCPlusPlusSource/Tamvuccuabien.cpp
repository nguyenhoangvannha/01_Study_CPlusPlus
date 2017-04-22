#include "iostream"
#include "string"
using namespace std;
void main()
{
	int biencucbo = 1;
	int biencucboduocdunglai = 2;
	{
		int biencucbo = 11;
		biencucboduocdunglai = 22;
	}
	cout << "bien cuc bo = " << biencucbo <<  endl;
	cout << "Bien cuc bo duoc xai lai = " << biencucboduocdunglai << endl;
	system("pause");
}