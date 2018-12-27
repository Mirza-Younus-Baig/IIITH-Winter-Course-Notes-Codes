#include<stdio.h>

int fact(int  n)
{
	if (n == 1)
		return 1;

	return fact(n - 1) * n;
}

int main()
{
	int i = 7;
	printf("%d", fact(i));
}