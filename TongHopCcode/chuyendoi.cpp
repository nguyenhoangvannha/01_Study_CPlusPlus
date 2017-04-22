#include "stdio.h"
#include "conio.h"
void chuyendoi(char *ten_fin, char *ten_fout)
{
	FILE *fin, *fout;
	int a[10], n;
	//mo tap tin de doc
	fin = fopen(ten_fin, "rt");
	//doc tap tin
	fout = fopen(ten_fout, "wt");
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++)
		fscanf(fin, "%d\t", &a[i]);
	fclose(fin);
	int tong = 0;
}