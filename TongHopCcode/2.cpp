#include <iostream.h>
#include <fstream.h>
#define Max 100
ifstream fin("BIG.INP");
ofstream fout("BIG.OUT");

void Nhap(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		fin >> a[i];
	}
}
void XuLy(int a[], int n)
{
	int i, j, d = 0, min, b[n + 2];
	for (i = 0; i<n; i++)
	{
		min = a[i];
		for (j = i + 1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				min = a[j];
			}
		}
		if (a[i] == min)
		{
			d++;
			b[i] = -10;
		}
	}
	fout << d << endl;
	for (i = 0; i<n; i++)
	{
		if (b[i] == -10)
		{
			fout << "a[" << i << "]=" << a[i] << "" << endl;
		}
	}
}
int main()
{
	int n, a[Max];
	fin >> n;
	Nhap(a, n);
	XuLy(a, n);
	system("pause");
}