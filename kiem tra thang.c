#include <stdio.h>
int main ()
{

    int m, y;
    printf("nhap thang nam: ");
    scanf("%d%d", &m,&y);
    if(m<=0 || y<0 || m>12 )
        printf("thang nam khong hop le");
    else{
    switch(m)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("Thang %d nam %d co 31 ngay", m, y);
        break;
    case 4:case 6:case 9:case 11:
        printf("Thang %d nam %d co 30 ngay ",m,y);
        break;
    case 2:
        if((y%4==0 && y%100 !=0) || y%400 == 0 )
            printf("Thang %d nam %d co 29 ngay ",m,y);
        else
             printf("Thang %d nam %d co 28 ngay ",m,y);
        break;
    }
    }
    return 0;
}
