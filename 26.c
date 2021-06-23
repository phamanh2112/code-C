//Tính tích tất cả “ước số lẻ” của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n;int s=1;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("tich uoc le cua %d la: ",n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            if(i%2!=0)
            s*=i;
        }
    }
    printf("%d\t",s);
    return 0;
}
