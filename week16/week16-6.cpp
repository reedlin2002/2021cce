#include <stdio.h>
#include <string.h>
char line[300]="1010101010101011110101";
int main()
{
    int ans=0;
    int n= strlen(line);
    for(int i=0;i<n;i++)
    {
        if(line[i]=='1')ans++;
    }
    printf("��%d��1\n",ans);
}

