//Viết hàm tìm một vị trí mà giá trị tại vị trí đó là một giá trị nhỏ nhất trong mảng một chiều các số nguyên.
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
void timVT(int a[], int n)
{
    int min=a[0];
    int vt=0;
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min=a[i];
            vt=i;
        }
    }
    printf("vi tri co gia tri min la %d",vt+1);
}
int main()
{
    int a[100];
    int n;
    printf(" nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    timVT(a,n);
    return 0;
}
