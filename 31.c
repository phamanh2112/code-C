/*Cho số nguyên dương n. Kiểm tra số nguyên dương n có phải là số
nguyên tố hay không?*/
#include<stdio.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    if(n<2)
        printf("%d khaong phai so nguyen  to", n);
    if(n==2)
        printf("%d la so nguyen to");
    if(n>2){
        for(int i=2; i<n; i++){
            if(n%i==0){
                printf(" %d khong phai so nguyen to", n);
                return;
            }
            else {
                printf("%d la so nguyen to",n);
            return;
            }
        }
    }
    return 0;
}
