//Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.
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
int kiemTraSNT(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n>2){
        for(int i=0; i<n; i++){
            if(n%i==0)
                return 0;
        }
        return 1;

    }
}
void demSNT(int a[], int n)
{
    int dem=0;
    printf("trong mang co cac so nt la: ");
    for(int i=0; i<n; i++){
        if(kiemTraSNT(a[i])==1){
                dem++;
        }
        printf("%d",dem);
    }
}
int main()
{
    int a[100];
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    demSNT(a,n);
    return 0;
}
