//Tìm giá trị lớn nhất trong mảng một chiều các số thực
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
void Max(int a[], int n)
{
    int max=a[0];
    for(int i=0; i<n; i++){
            if(max<a[i])
            max=a[i];
    }
    printf("Max= %d",max);
}
int main()
{
    int a[100];
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    Max(a,n);
    return 0;
}
