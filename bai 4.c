/*viet ham kiemm tra hai so co la hai so nguyen to cung nhau hay khong */
#include<stdio.h>

    int UCLN( int a,int b)
{
    int c;
    if(a>b)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0&&b%i==0)
                c=i;
        }
    }
        if(a<b)
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
                c=i;
        }
    }
    return c;

}
int laSoNguyenToCungNhau(int a, int b)
{
    if(UCLN(a,b)==1)
        return 1;
    return 0;
}
int main()
{
    int a;
    int b;
    printf("nhap a,b: ");
    scanf("%d%d",&a,&b);
    if(laSoNguyenToCungNhau(a,b)==1)
    printf("%d,%d la hai so nguyen to cung nhau",a,b);
    else if(laSoNguyenToCungNhau(a,b)==0)
        printf("%d,%d khong la hai so nguyen to cung nhau",a,b);
    return 0;

}
