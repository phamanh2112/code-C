// viet chuong tình tính chu vi diện tích hình tròn in kq vs r nhap tu ban phim
#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float s,p;
    printf(" nhap ban kinh hinhf tron: ");
    scanf("%d",&r);
    s=pi*r*r;
    p=2*pi*r;
    printf("dien tich cua hinh tron la: %f\n", s);
    printf("chu vi cua hinh tron la: %f",p);
    return 0;


}
