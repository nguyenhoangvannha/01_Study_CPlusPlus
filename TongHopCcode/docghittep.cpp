#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
void main()
{
	FILE *f;
	f = fopen("D:\\VDT\\Taptin\\int.txt", "wt");
	for (int i = 0; i<100; i++)
	{
		for (int j = 0; j<100; j++)
			fprintf(f, "%d\t", i);
		fprintf(f, "\n");
	}
	/*for (int i = 0; i<100; i++)
	{
		for (int j = 0; j<100; j++)
			fscanf(f, "%d",g);
	}*/
	fclose(f);
	//fclose(g);
}
