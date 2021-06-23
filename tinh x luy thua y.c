//viet chuong trinh tinh x luy thua y
#include<stdio.h>
#include<math.h>
int main()
{
    int x, y;
    printf("nhap x, y= ");
    scanf("%d%d",&x, &y);
    int lt=pow(x,y);
    printf("%d luy thu %d la: %d",x,y,lt);
    return 0;
}
