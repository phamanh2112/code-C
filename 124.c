/*Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ
hơn 2004 hay không?*/
#include<stdio.h>
void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void soCanTim(int a[], int n)
{
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]<2004)
           c=1;
    }
    if(c==1)
        printf("co ton tai so nguyen nho hon 2004");
    else printf("khong ton tai so nguyen nho hon 2004");
}
int main()
{
    int a[100];
    int n;
    printf(" nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    soCanTim(a,n);
    return 0;
}
