#include <iostream.h>
#include <fstream.h>
#define Max 100
ifstream fin("BIG.INP");
ofstream fout("BIG.OUT");

void Nhap(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		fin >> a[i + 1];
	}
}
void XuLy(int a[], int n)
{
	int jmax, i, j, L[n + 2], T[n + 2], d = 0;
	a[0] = INT_MIN;
	a[n + 1] = INT_MAX;
	L[n + 1] = 1;
	for (i = n; i >= 0; i--)
	{
		jmax = n + 1;
		for (j = i + 1; j <= n + 1; j++)
		{
			if (a[j]>a[i] && L[j]>L[jmax])
				jmax = j;
			L[i] = L[jmax] + 1;
			T[i] = jmax;
		}
	}
	i = T[0];
	fout << L[0] - 2 << endl;
	while (i != n + 1)
	{
		fout << "a[" << i << "]=" << a[i] << "\t" << endl;
		i = T[i];
	}
}
int main()
{
	int n, a[Max];
	fin >> n;
	Nhap(a, n);
	XuLy(a, n);
	system("pause")';
}