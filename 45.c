//Hãy tính tích các chữ số của số nguyên dương n
#include<stdio.h>
int main()
{
   int n, s=1, d;
   printf("nhap n= ");
   scanf("%d",&n);
   for(; n!=0;){
    d=n%10;
    s*=d;
    n/=10;
   }
   printf("tich cac chu so  la: %d",s);
   return 0;
}
