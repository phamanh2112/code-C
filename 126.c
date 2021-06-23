//Viết hàm tính tổng các giá trị âm trong mảng một chiều các số thực.
#include<stdio.h>
void nhap(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
    }
}
void xuat(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%f\t", a[i]);
    }
}
void tinhTongAm(float a[], int n )
{
    float s=0;
    for(int i=0; i<n; i++){
        if(a[i]<0)
           s+=a[i];
    }
    printf("Tong_am= %f",s);
}
//127.Viết hàm sắp xếp mảng một chiều các số thực tăng dần
void sapXepTang(float a[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]<a[j]){
               float tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }

    }
    for(int i=0; i<n; i++)
        printf("%f\t",a[i]);
}
int main ()
{
    int a[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    nhap(a,n);
    xuat(a,n);
    printf("\n");
    tinhTongAm(a,n);
    printf("\n");
    sapXepTang(a,n);
    return 0;

}
