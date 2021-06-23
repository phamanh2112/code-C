//Liệt kê tất cả các số chính phương nhỏ hơn n.
#include<stdio.h>
#include<math.h>
int kiemTraSoChinhPhuong(int n)
{
    if(sqrt(n)*sqrt(n)==n)
        return 1;
    return 0;

}
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf(" cac so chinh phuong nho hon %d la: ",n);
    for(int i=1; i<n; i++){
        if(kiemTraSoChinhPhuong(i))
            printf("%d\t",i);
    }
    return 0;
}
