
//4.Viết một chương trình tính thể tích của một hình trụ.
#include<stdio.h>
#define pi 3.14
int main()
{
    int r, h;
    float v;
    printf("nhap ban kinh mat day: ");
    scanf("%d",&r);
    printf("\nnhap chieu cao cua hinh tru: ");
    scanf("%d",&h);
    v=pi*r*r*h;
    printf("\nthe tich hinh tru la: %.2f ",v);
    return 0;
}
