/*Câu 6: viết chương trình nhập vào 2 số a, b. tìm ước chung lớn nhất của 2 số . in
kết quả*/
#include<stdio.h>
void ucln(int a, int b)
{
    int c;
    if(a<b)
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
                c=i;
        }
        printf("ucln= %d ",c);

    }
    if(a>b)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0&&b%i==0)
                c=i;
        }
        printf("ucln= %d ",c);

    }
}
int main ()
{
    int a,b;
    printf("nhap a,b: ");
    scanf("%d %d",&a,&b);
    ucln(a,b);
    return 0;

}
