/*Câu 8: viết chương trình nhập vào số nguyên n. tính
A=1*2+2*3+…+n*(n+1)
In kết quả*/
#include<stdio.h>
int main ()
{
    int n,A=0;
    printf("nhap n= ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("nhap lai n\n");
    }
    else
    {
        for(int i=1;i<=n;i++){
        A+=(i*(i+1));
        }
        printf("A= %d",A);
    }
    return 0;

}
