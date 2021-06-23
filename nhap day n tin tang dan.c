#include<stdio.h>
#define Max 100
void nhap(int a[], int n)
{
    printf("nhap\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
void xuat(int a[], int n)
{
    printf("day ban dau: \n");
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void sapXepTang(int a[], int n)
{
    printf("day sap xep: \n ");
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[Max];
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    nhap(a,n);
    xuat(a,n);
    sapXepTang(a,n);
    return 0;
}
