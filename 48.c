//Hãy tính tích các chữ số lẻ của số nguyên dương n
#include<stdio.h>
int main()
{
    int n, s=1;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=n; i>0;){
        int d=i%10;
        if(d%2!=0){
            s*=d;
        }
        i/=10;
    }
    printf("tich cac chu so le la: %d",s);
    return 0;
}
