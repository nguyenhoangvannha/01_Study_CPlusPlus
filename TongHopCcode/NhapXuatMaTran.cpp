#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "time.h"
#define MAX 100
void LuuFile(char &tenfile, int a[MAX][MAX], int m, int n)
{
	FILE *f;
	f = fopen_s(tenfile, "wt");
	if (f == NULL)
	{
		printf("\nKhong tao duoc file.");
		getch();
		exit(0);
	}
	fprintf(f, "%d %d\n", m, n);
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
			fprintf(f, "%d\t", a[i][j]);
		fprintf(f, "\n");
	}
	fclose(f);
}
void DocFile(char *tenfile, int a[MAX][MAX], int &m, int &n)
{
	FILE *f;
	f = fopen(tenfile, "rt");
	if (f == NULL)
	{
		printf("\nKhong doc duoc file.");
		getch();
		exit(0);
	}
	fscanf(f, "%d%d", &m, &n);
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
			fscanf(f, "%d", &a[i][j]);
	}
	fclose(f);
}
void main()
{

	char tenfile[55] = "E:\VDT\file\file1.txt";
	int i, j;
	int a[MAX][MAX], m = 5, n = 6;
	int b[MAX][MAX], x, y;
	srand(time(NULL));
	for (i = 0; i<m; i++)
	for (j = 0; j<n; j++)
		a[i][j] = (rand() % (10000000 - 99999 + 1)) + 99999;;
	LuuFile("data.txt", a, m, n);
	DocFile("data.txt", b, x, y);
	for (i = 0; i<x; i++)
	{
		for (j = 0; j<y; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}
}