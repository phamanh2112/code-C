/*Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ
lớn nhất của 100 là 25.*/
#include<stdio.h>
int main()
{
    int n;
    int max=1;
    printf(" nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(i%2!=0){
            if(n%i==0){
               if(max<i)
                max=i;
            }
        }
    }
    printf("uoc le lon nhat la: %d", max);
     return 0;
}
