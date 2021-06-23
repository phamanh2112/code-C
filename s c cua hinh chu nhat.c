//3.Viết một chương trình tính diện tích và chu vi của hình chữ nhật.

#include<stdio.h>
int main()
{
    int a,b,s,c;
    printf("nhap chieu dai chieu rong: ");
    scanf("%d%d",&a,&b);
    s=a*b;
    c=2*(a+b);
    printf("dien tich hinh chu nhat la: %d\n",s);
    printf(" chu vi hinh chu nhat la: %d ",c);
    return 0;

}
