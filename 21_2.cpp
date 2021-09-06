#include<stdio.h>
void column(int c) 
{
	if (c > 0)
	{
		printf("*");
		column(c - 1);
	}
}

void row(int r, int c)
{
	if (r > 0)
	{
		column(c);
		printf("\n");
		row(r - 1, c);
	}
}

int main() 
{
	int n;
	scanf_s("%d", &n);
	row(n, n);
	return 0;
}