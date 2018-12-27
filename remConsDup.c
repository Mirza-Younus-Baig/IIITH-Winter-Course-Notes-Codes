#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void in(char *a){
	gets(a);
}

void out(char *a)
{
	int i=0, j=1;
	while(a[j])
	{
		if(a[i] != a[j])
			a[++i] = a[j];
		j++;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	char *a = (char * )malloc(n);
	fflush(stdin);
	in(a);
	out(n);
	
}
