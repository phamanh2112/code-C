//Tìm chữ số lớn nhất của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n, max=0,d;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=n; i>0;){
        d=i%10;
        if(d>max){
            max=d;
        }
        i/=10;
    }printf("so lon nhat la: %d",max);
    return 0;
}
