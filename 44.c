
//Hãy tính tổng các chữ số của số nguyên dương n
#include<stdio.h>
int main()
{
    int n, s=0,a;
    printf("nhap n= ");
    scanf("%d",&n);
    for(; n!=0; ){
        a=n%10;
        s+=a;
        n=n/10;

    }
    printf("tong cac chu so trong  la: %d",s);
    return 0;
}
