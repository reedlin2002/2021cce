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
    if(b==0) printf("%d是質數",a);
    else printf("%d 不是質數",a);
}
