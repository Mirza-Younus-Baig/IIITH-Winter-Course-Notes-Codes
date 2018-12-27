#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void in(char *a)
{
	gets(a);
}
void out(char *a)
{
	int i = 0, j = 0;
	while(a[j])
	{
		if(a[j] == ' ')
			j++;
		else
		{
			if(j != i)
			{
				a[i] = a[j];
			}
				i++;
				j++;
		}
	}
	a[i] = '\0';
	printf("%s", a);
}

int main()
{
	int n;
	scanf("%d", &n);
	char *a = (char *)malloc(n);
	fflush(stdin);
	in(a);
	out(a);
	free(a);
}
