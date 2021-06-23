/*Câu 7: Viết chương trình nhập vào số nguyên n,x. tính biểu thức
Q=10+e^x +e^2x +e^3x +….+e^nx
In kết quả*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    float q=10;
    float e=2.718281828;
    printf("nhap n,x= ");
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
       q+=pow(e,i*x);
    }
    printf("Q=%f",q);
    return 0;
}
