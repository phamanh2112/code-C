//tinh t=x+x^2+...+x^n
#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    int t=0;
    printf("nhap x,n= ");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++){
     t+=pow(x,i);
    }
    printf("T= %d",t);
    return 0;
}
