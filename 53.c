//Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n, dem=0, d,max=0;
    printf("nhap n= ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        if(d>max){
            max=d;
        }
        n/=10;
    }
    printf("max= %d\n", max);
    while(n>0){
        d=n%10;
        int a=max;
        if(d==a){
            dem++;
        }
        n/=10;

    }
 printf("so luong chu so lon nhat la: %d", dem);
    return 0;
}


