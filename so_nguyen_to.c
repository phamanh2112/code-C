#include <stdio.h>
#include <math.h>
int kiemtrasonguyen(int n)
{
    if (n<2) return 0;
    if (n==2) return 1;
    if (n>2) {
        for (int i=2; i<=sqrt (n); i++)
            if (n%i==0) return 0;
    }
    return 1;
}
int main()
{
    unsigned int n;
    scanf("%u",&n);
    if(kiemtrasonguyen(n)==1){
        printf("La so nguyen to\n");
    }
    else printf("khong la so nguyen to\n");
    return 0 ;
}
