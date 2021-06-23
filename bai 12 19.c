/*nhập vào x, n. tính
A=100+x/10-x/20+…+(-1) ^n+1 x/10*n  */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    float A=100;
    printf("nhap n,x: ");
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        A+=pow(-1,i+1)*x/(10*i);

    }
    printf("A= %f",A);
    return 0;

}
