#include<stdio.h>
#include<stdlib.h>

void inp(char *a)
{
	gets(a);
}

void outp(char *a, int x, int y)
{
	int i = x, j = y;
	while(a[j])
	{
		a[i++] = a[j++];
	}
	a[i] = '\0';
	printf("%s", a);
}

int main()
{
	int n;
	scanf("%d", &n);
	char *a = (char *)malloc(n);
	int x, y;
	scanf("%d%d", &x, &y);
	fflush(stdin);
	inp(a);
	outp(a, x, y);
	free(a);
}
