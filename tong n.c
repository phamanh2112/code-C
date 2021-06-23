#include<stdio.h>
int main()
{
    int n;
    int s,m=0;
    printf("nhap n= ");
    scanf("%d",&n);
    /*do
    {
        s=n%10;
        m=10*m+s;
        n/=10;
    }
    while(n>0);
        */
        while(n>0)
    {
        s=n%10;
        m=10*m+s;
        n/=10;
    }
    printf("so dao nguoc la: %d",m);
    return 0;
}
