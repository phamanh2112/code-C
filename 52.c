//Tìm chữ số nhỏ nhất của số nguyên dương n
#include<stdio.h>
int main()
{
    int n, min=9, d;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=n; i>0;){
        d=i%10;
        if(d<min){
            min=d;
        }
        i/=10;
    }
    printf("so nho nhat la:%d",min);
}
