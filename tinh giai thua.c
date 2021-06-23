#include<stdio.h>
int main()
{
    int n;
    int s=1;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        s*=i;
    }
    printf("dai thua cua %d la :%d",n,s);
    return 0;
}
