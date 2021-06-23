
/*Bài 3: Viết chương trình thực hiện các yêu cầu sau: (DÙNG HÀM)
a. Xây dựng hàm kiểm tra một số có phải là số nguyên tố không.
Áp dụng, nhập vào từ bàn phím số nguyên dươngn, in ra màn hình các số
nguyên tố nhỏ hơn hoặc bằng n.
- Viết chương trình con (hàm): kiểm tra số nguyên tố:
- Trong main: in các số nguyên tố từ 1-n*/
#include<stdio.h>
#include<math.h>
int kiemtra(int n)
{
    if(n<2) return 0;
    if(n==2) return 1;
    if(n>2)
    {
    int  i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
}
void  inso(int n)
{
    if(n<=2)
        printf("khong so nguyen to nho hon %d",n);
    else
    {

        printf("so cac so nguyen to nho hon %d la: ",n);
        for(int i=2;i<n;i++){
           if(kiemtra(i)==1)
            printf("%d\t",i);
        }
    }
}

int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    if(kiemtra(n)==1)
        printf("%d la so nguyen to\n",n);
    else
        printf("%d khong la so nguyen to\n",n);
    inso(n);
    return 0;
}
