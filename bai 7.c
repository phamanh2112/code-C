/*Cho một mảng số thực. Hãy in ra (theo trật tự ban đầu) các phần tử có giá trị lớn hơn trung bình cộng toàn mảng.

Input
Dòng 1: n - số nguyên dương cho biết kích thước của mảng; 0 < n < 50
Dòng 2: n số thực trong khoảng (-100, 100)

Output
Dòng 1: Dãy ban đầu
Dòng 2: Giá trị trung bình các phần tử của dãy
Dòng 3: Dãy các số thực lớn hơn giá trị trung bình.
Các số thực được in ra với 2 chữ số thập phân sau dấu phẩy; riêng giá trị trung bình được in ra với 3 chữ số thập phân sau dấu phẩy.

VD
Input:
8
-6.63 -11.57 33.42 50.79 -86.97 -30.94 15.21 -93.34

Output:
-6.63 -11.57 33.42 50.79 -86.97 -30.94 15.21 -93.34
Avg = -16.254
-6.63 -11.57 33.42 50.79 15.21
*/
#include<stdio.h>
#define Max 100
void nhapMang(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%f",&a[i]);
    }
    printf("\n");
}
void xuatMang(float a[], int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%.2f\t",a[i]);
    }
printf("\n");
}
void tinhGiaTriTB(float a[], int n,float s)
{
    s=0;
    for(int i=0;i<=n;i++)
    {
        s=(s+a[i])/i;
    }
   printf("gia tri trung binh cua mang la: %.1f\n",s);
}
void timPhanTu(float a[],int n, int s)
{
    printf("phan tu trong mang lon hon gia tri trung binh la ");
    for(int i=0;i<n;i++)
    {
        if(a[i]>s)
            printf("%.2f",a[i]);
    }
}
int main()
{
    int n;
    float a[Max];
    float s;
    printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    tinhGiaTriTB(a,n,s);
    timPhanTu(a,n,s);
    return 0;
}
