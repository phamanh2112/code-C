/*Một số nguyên 𝑥 = AkA(K-1)...A2A1 được gọi là số Amstrong khi
𝑥 = 𝑎𝑘^𝑘 + 𝑎(𝑘−1)^K+...+ 𝑎2^𝑘 + 𝑎1^𝑘
Hãy viết chương trình liệt kê tất cả các số Amstrong năm trong đoạn
[1,1.000.000].*/
#include<stdio.h>
#include<math.h>
int kiem_Tra_So_Co_Bao_Nhieu_Chu_So(int n)
{
    int dem=0;
    while(n!=0){
        n/=10;
        dem++;
    }
    return dem;
}
int tong( int k, int n)
{
    int tong=0;
    int chu_so;
    k=kiem_Tra_So_Co_Bao_Nhieu_Chu_So(n);
    for(int i=n; i>0; ){
        chu_so=i%10;
        tong+=pow(chu_so,k);
        i/=10;
    }
    if(n==tong)
        return 1;
}
int main ()
{
    int k;
    printf("cac so Amstrong: ");
    //printf("%d co %d chu so ",n,kiem_Tra_So_Co_Bao_Nhieu_Chu_So(n));
    for(int i=1; i<=1000000; i++){
       if(tong(k,i)==1)
        printf("%d\n",i);
    }
    return 0;
}
