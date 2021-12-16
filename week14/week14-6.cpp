#include <stdio.h>

int a[10][10];

int main()
{
	int n;
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)printf("%3d",a[i][j]);
		printf("\n");
	}
}
