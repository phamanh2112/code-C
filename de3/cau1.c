/*nhap vào 2 số là tháng năm kiểm tra xem tháng đó có bao nhiêu ngày
in ra kq theo dạng Tháng 3 năm 2014 có 31 ngày*/
#include <stdio.h>
int main ()
{
    int m, y;
    printf("nhap thang nam: ");
    scanf("%d%d", &m, &y);
    if(m <=0 || y<=0 || m >12)
        printf("thang nam khong hop le! ");
    else{

        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
            printf("Thang %d nam %d co 31 ngay", m, y);
        }
        else if(m == 4 || m == 6 || m == 9 || m == 11 ){
            printf("Thang %d nam %d co 30 ngay", m, y);
        }
        else {
            if((y%4==0 && y%100!=0) || (y%400==0)){
                printf("Thang %d nam %d co 29 ngay", m, y);
            }
            else {
                printf("Thang %d nam %d co 28 ngay", m, y);
            }
        }
    }
    return 0;
}
