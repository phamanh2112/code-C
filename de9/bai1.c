// viet chuong trinh tim boi chung nho nhat cua hai so nguyen duong nhap tu ban
#include<stdio.h>
int main ()
{
    int a,b;
    int bcnn;
    printf("mhap a,b= ");
    scanf("%d%d", &a, &b);
    int t=a*b;
    for(int i=t; i>0; i--){
        if(i%a==0 && i%b==0){
            bcnn=i;
        }
    }
    printf("BCNN= %d", bcnn);
    return 0;
}
