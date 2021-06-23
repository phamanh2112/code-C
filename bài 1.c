/*Bài 1: (YÊU CẦU DÙNG HÀM)Dùng hàm kiểm tra một số có là số hoàn hảo không
Nhập vào một số n . kiểm tra xem có bao nhiêu số hoàn hảo &lt;=n
Số hoàn hảo là số có tổng các ước bằng chính nó. Ví dụ: 6=1+2+3*/
#include<stdio.h>
int kiemtra(int n)
{
   int i,s=0;
   for(i=1;i<n;i++)
   {
       if(n%i==0)
        s+=i;
   }
   if(s==n) return 1;
   return 0;
}
int main()
{
    int n, dem;
    printf("nhap n= ");
    scanf("%d",&n);
    if(kiemtra(n)==1)
    {
        printf("\n%d la so hoan hao",n);
        dem++;
    }
        printf("\n %d khong la so hoan hao",n);
    for(int i=1;i<n;i++)
        {
          if(kiemtra(i)==1)
            dem++;
        }
    printf("\nso cac so nho hon %d la: %d",n,dem);
    return 0;
}
