#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float s,c;
    printf("nhap ban kinh: ");
    scanf("%d",&r);
    s=pi*r*r;
    c=2*pi*r;
    printf("chu vi cua hinh tron la: %.2f",c);
    printf("dien tich  cua hinh tron la: %.2f",s);
    return 0;
}
