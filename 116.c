/*Viết chương trình nhập n và tính tổng
S(n) = 1 + 2 + 3 + … + n*/
#include<stdio.h>
void tong(int n)
{
    int s=0;
    for(int i=0; i<=n; i++){
        s+=i;
    }
    printf("tong S= %d",s);
}
int main()
{
    int n;
    printf(" nhap n= ");
    scanf("%d",&n);
    tong(n);
    return 0;
}
