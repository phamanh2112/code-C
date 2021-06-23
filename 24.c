//Liệt kê tất cả “ước số lẻ” của số nguyên dương n.


#include<stdio.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("cac uoc le cua %d la: ",n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            if(i%2!=0)

            printf("%d\t",i);
        }
    }
    return 0;
}
