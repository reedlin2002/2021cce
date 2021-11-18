#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int ans=0;
	for(int n=2;n<=m;n++)
	{
		int bad=0;
		for(int k=2;k<n;k++)
		{
			if(n%k==0)bad++;
		}
		if(bad==0)
		{
		    ans++;
		    printf("%d ",n);
		}
	}
	printf("\nans: %d\n",ans);
}
