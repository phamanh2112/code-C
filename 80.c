//Tính S(n) = 𝑥 + 𝑥^2/(1+2)+...+x^n/(1+2+...+n)
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    int d=0;
    float s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("nhap x= ");
    scanf("%d",&x);
    for(int i=1;i<=n;i++)
    {
        d+=i;
        s+=pow(x,i)/d;
    }
    printf("Tong S= %.3f",s);
    return 0;
}
