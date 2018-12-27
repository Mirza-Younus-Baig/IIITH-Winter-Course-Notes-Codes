#include<stdio.h>

int main()
{
	int i;
	char a[100];
	for ( i = 0; i < 100; i++)
		printf("%d\n", &a[i]);
}
