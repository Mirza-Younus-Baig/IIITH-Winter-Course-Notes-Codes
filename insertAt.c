#include<stdio.h>
#include<stdlib.h>
void inp1(char *a, char *b)
{
	gets(a);
	fflush(stdin);
	gets(b);
}
void outp(char *a, char *b, int x, int y)	
{
		int i = x, j=y, k=0;
		while(i <= j && a[j] && b[k])
		{
			a[i++] = b[k++];
		}
		while(a[i])
		{
			a[i++] = a[ i + k];
			k++;
		}
		a[i] = '\0';
		printf("%s", a);
}

int main()
{
	int n;
	scanf("%d", &n);
	char *a = (char *)malloc(n);
	char *b = (char *)malloc(n);
	int x, y;
	scanf("%d%d", &x, &y);
	fflush(stdin);
	inp1(a, b);
	outp(a, b, x, y);
	free(a);
	free(b);
}
