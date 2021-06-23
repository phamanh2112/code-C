#include<stdio.h>
int main()
{
    int m,y;
    printf("nhap thang nam= ");
    scanf("%d%d",&m, &y);
    switch(m)
    {
     case 1:case 3:case 5: case 7: case 8: case 10: case 12:
    printf("thang %d co 31 ngay",m);
    break;
    case 4:case 6:case 9: case 11:
        printf("thang %d co 30 ngay",m);
    break;
    case 2:
        if((y%4==0&&y%100!=0) || y%400==0)
            printf("thang %d co 29 ngay",m);
        else printf("thang %d co 28 ngay",m);
    }
    return 0;
}
