//Hãy tính tổng các chữ số chẵn của số nguyên dương n
#include<stdio.h>
int main()
{
    int n, s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=n; i>0;){
        int d=i%10;
        if(d%2==0){
            s+=d;
        }
        i/=10;
    }
    printf("tong cac chu so chan la: %d", s);
    return 0;
}
