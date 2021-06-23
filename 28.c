
//Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
#include<stdio.h>
int main()
{
    int n, s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0)
            s+=i;
    }
    printf("tong cac uoc nho hon %d la %d", n, s);
    return 0;

}
