#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int b=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0) b++;
    }
    if(b==0) printf("%d�O���",a);
    else printf("%d ���O���",a);
}
