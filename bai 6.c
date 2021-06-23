/*Đọc vào một mảng và in ra mảng đó theo trật tự đảo ngược các phần tử.

Input
Dòng 1: n - số lượng phần tử của dãy, n<50
Dòng 2: n số nguyên trong khoảng [-100, 100]

Output
Dòng 1: dãy ban đầu
Dòng 2: dãy với trật tự đảo ngược
Yêu cầu:
1) Mỗi số nguyên được in ra với 5 vị trí, căn lề bên phải
2) Trong chương trình có xây dựng và sử dụng các hàm sau:
- Hàm đọc giá trị vào mảng
- Hàm in mảng
- Hàm in mảng theo trật tự đảo ngược

VD
Input:
10
47 79 -47 72 56 92 54 -56 86 -72

Output:
 47   79  -47   72   56   92   54  -56   86  -72
-72   86  -56   54   92   56   72  -47   79   47
*/
#include<stdio.h>
#define Max 100
void nhapMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
}
void xuatMang(int a[], int n)
{
    printf(" mang ban dau la: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
void xuatMangDaoNguoc(int a[], int n)
{
    printf("mang dao nguoc la: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}
int main ()
{
    int a[Max],n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    xuatMangDaoNguoc(a,n);
}
