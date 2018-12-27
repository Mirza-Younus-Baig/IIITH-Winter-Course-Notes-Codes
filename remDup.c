#include<stdio.h>
void inp1(char *a)
{
	gets(a);
}

void output(char *a)
{
	int i=0, j=1;
	while(a[j])
	{
		if(a[i] != a[j] && i!=j)
			a[++i] = a[j];
		j++;
	}
	a[i]= '\0';
	printf("%s", a);
}
int main()
{
	int n;
	scanf("%d", &n);
	char *a = (char *)malloc(n);
	fflush(stdin);
	inp1(a);
	output(a);
	free(a);
}
