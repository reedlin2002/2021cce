#include <stdio.h>
int main()
{
	int a,b,c,x;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
	x=a;
	a=b;
	b=x;
	}
	if(a<c)
	{
	x=a;
	a=c;
	c=x;
	}
	if(a>b+c)
	printf("Error");
	else
	{
	if(a*a==b*b+c*c)
	printf("ª½¨¤");
	if(a*a<b*b+c*c)
	printf("¾U¨¤");
	if(a*a>b*b+c*c)
	printf("¶w¨¤");
	}
}
