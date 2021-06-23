/*Câu 5: viết chương trình tìm các số có 3 chữ số sao cho tổng các chữ số cộng lại
bằng 9. In kết quả ra màn hình (ví dụ: 234 có tổng 3 chữ số: 2+3+4=9)*/
#include<stdio.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    if(n<100||n>999)
        printf("nhap lai %d\n",n);
    else
{
        if((n/100)+(n/10)%10+n%10==9)
            printf("so can tim la %d",n);
            else
                printf("nhap lai ");
}

    return 0;
}
