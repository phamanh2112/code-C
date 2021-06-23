// tinh t=1+1*2+1*2*3+....+1*2*3*...*n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,d=1,t=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        d*=i;
        t+=d;
    }
    printf("T= %d",t);
    return 0;
}
