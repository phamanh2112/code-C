//tính tổng s=1+2+…+n (n là số nguyên dương nhập từ bàn phím)
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("nhap n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("S= %d",s);
    return 0;
}
