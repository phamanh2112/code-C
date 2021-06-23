//Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n.
#include<stdio.h>
int main()
{
    int n,d;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=n; i>0;){
        d=i%10;
        i/=10;
    }
    printf("chu so dau tien la: %d",d);
    return 0;
}
