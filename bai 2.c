
 /*Cho một mảng một chiều các số nguyên. Kiểm tra xem một số nguyên nào đó xuất hiện trong mảng bao nhiêu lần.

Input
Dòng 1: n - số lượng phần tử trong mảng, n<500
Dòng 2: n số nguyên trong khoảng [-100, 100]
Dòng 3: a - một số nguyên trong khoảng [-100, 100]

Output
Số lần xuất hiện số nguyên a trong mảng đã cho

VD
Input:
8
32 -80 -47 10 -38 64 -6 64
64

Output:
2*/
#include<stdio.h>
#define Max 100
void nhapMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0; i<n;i++)
        {
        printf("%d  ",a[i]);
        }
     printf("\n");
}
int  demPhanTu(int a[], int n, int dem, int c)
{
    dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c)
            dem++;
    }
    return dem;
}
int main()
{
    int n, dem ,c;
    int a[Max];
    printf("nhap so luong phan tu mang ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("nhap phan tu c:");
    scanf("%d",&c);
    printf("so lan xuat hien %d la %d",c,demPhanTu(a,n,dem,c));
    return 0;
}
