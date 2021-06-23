/*Bài 4: Viết chương trình thực hiện các yêu cầu sau: (DÙNG HÀM)
a. Xây dựng hàm tìm ước số chung lớn nhất (USCLN) của 2 số nguyên dương
bất kỳ.
b. Xây dựng hàm tìm BSCNN.
Áp dụng, nhập vào 2 số nguyên tương ứng là tử số và mẫu số của 1 phân số, in
ra màn hình dạng tối giản của phân số đó.*/
#include<stdio.h>
int ucln(int a, int b)
{
    int i,c;
    for (int i=1; i<=a||i<=b;i++){
        if(a%i==0&&b%i==0)
            c=i;
    }
      return c;
}

int  bcnncuaab(int a, int b)
{
    int bcnn;
    int c=ucln(a,b);
    bcnn=(a*b)/c;
    return bcnn;
}
void phanSoToiGian(int a, int b)
{
    float tu, mau;
    int c=ucln(a,b);
    if(a==b)
        printf(" phan so toi gian la: 1");
    else
    {
        tu=a/c;
        mau=b/c;
        printf(" phan so toi gian la: %.2f/%.2f\n", tu, mau);
    }
}

int main()
{
    int a,b;
    printf("nhap a,b: ");
    scanf("%d %d",&a,&b);
    printf("ucln= %d\n",ucln(a,b));
    printf("bcnn= %d\n",bcnncuaab(a,b));
    phanSoToiGian(a,b);
    return 0;
}
