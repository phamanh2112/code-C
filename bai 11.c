
//Nhập vào số nguyên n. tính tổng các số chẵn trong khoảng từ 1 đến n
#include<stdio.h>
int kiemTraSoChan(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
int main()
{
    int n,s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if(kiemTraSoChan(i))
            s+=i;
    }
        printf("tong cac so chan la: %d",s);
        return 0;
}
