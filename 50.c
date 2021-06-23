//Hãy tìm chữ số đảo ngược của số nguyên dương n.
#include<stdio.h>
int main()

{
    int n,s;
    int m=0;
    printf("nhap n= ");
    scanf("%d", &n);
    for(int i=n; i>0;){
         s=i%10;
         m=m*10+s;
         i/=10;
    }
    printf("so dao nguoc la %d",m);
    return 0;
}
