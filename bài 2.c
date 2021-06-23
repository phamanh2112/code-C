/*Bài 2: Viết chương trình thực hiện các yêu cầu sau: (DÙNG HÀM)
a. Nhập vào 3 số thực a, b, c từ bàn phím.
b. Kiểm tra a, b, c có lập thành ba cạnh của tam giác không?
c. Nếu có hãy kiểm tra đây là tam giác cân, đều, vuông hay tam giác
thường.
d. Tính chu vi và diện tích của tam giác.
In kết quả ra màn hình.*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int kiemtra(int a, int b, int c)
{
    if(a<b+c||b<c+a||c<b+a)
        return 1;
    return 0;
}
void tamgiac(int a, int b, int c)
{
    if(kiemtra(a,b,c)==1)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
           printf("tam giac vuong\n");
        else if(a==b&&b==c)
            printf("tam giac deu\n");
        else if(a==b&&b!=c||a==c&&c!=b||c==a&&a!=b)
           printf("tam giac can\n");
        else
        printf("tam giac thuong\n");
    }
}
void dientich_chuvi(int a, int b, int c)
{
    int q=(a+b+c)/2;
    int s,e;
    if(kiemtra(a,b,c)==1)
    {
        s=sqrt(q*(q-a)*(q-b)*(q-c));
        e=a+b+c;
    }
    printf("dien tich tam giac la: %d\n",s);
    printf("chu vi tam giac la: %d\n",e);
}
int main()
{
    int a,b,c;
    printf("nhap a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(kiemtra(a,b,c)==1)
        printf("%d %d %d la ba canh cua tam giac\n",a,b,c);
    else
         printf("%d %d %d khong la ba canh cua tam giac\n",a,b,c);
    tamgiac(a,b,c);
    dientich_chuvi(a,b,c);
    return 0;



}
