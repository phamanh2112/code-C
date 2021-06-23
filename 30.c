/*Cho số nguyên dương n. Kiểm tra số dương n có phải là số hoàn thiện
hay không?*/
#include<stdio.h>
int main()
{
    int n;
    int s=0;
    printf(" nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n)
        printf("%d la so hoan hao\n",n);
    else printf("%d khong phai la so hoan hao",n);
    return 0;
}
