/*Cho số nguyên dương n. Kiểm tra số nguyên dương n có phải là số
chính phương hay không?*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    if(sqrt(n)*sqrt(n)==n)
        printf("%d la so chinh phuong",n);
    else printf("%d khong la so chinh phuong",n);
    return 0;
}
