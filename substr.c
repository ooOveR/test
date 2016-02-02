#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100]=" iPhone 6s Plus";
	char b[100];
	int i=0,j=0;
	int n=strlen(a);
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		//if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%c",b[i]);
	}
	putchar('\n');


	return 0;
}
