//Viết chương trình nhập n và tính tổng S(n) = 𝑥 + 𝑥^2 + 𝑥^3 + ... + 𝑥^𝑛 .
#include<stdio.h>
#include<math.h>
void Tong(int x, int n)
{
    int s=0;
    for(int i=1; i<=n; i++){
        s+=pow(x,i);
    }
    printf("tong S= %d",s);
}
int main()
{
    int x, n;
    printf("nhap x,n= ");
    scanf("%d%d",&x,&n);
    Tong(x,n);
    return 0;
}
