
/*Cho một số nguyên và một mảng một chiều các số nguyên. Kiểm tra xem số nguyên đã cho xuất hiện trong mảng mấy lần, ở những vị trí nào.

Input
Dòng 1: n - số lượng phần tử trong mảng, n<500
Dòng 2: n số nguyên trong khoảng [-100, 100]
Dòng 3: a - một số nguyên trong khoảng [-100, 100]

Output
Số lần xuất hiện số nguyên a trong mảng đã cho và các vị trí (nếu có) mà a xuất hiện.
Lưu ý: chỉ số mảng tính từ 0.

VD1
8
32 -80 -47 10 -38 64 -6 64
64

Output:
The value 64 appears 2 time(s)
At the following position(s): 5 7

VD2
Input:
8
32 -80 -47 10 -38 64 -6 64
90
Output:
The value 90 does not exist in the given array
*/
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
void viTriXuatHien(int a[], int n,int c,int v)
{
    printf("vi tri xuat hien cua %d la  ",c);
    for(int i=0;i<n;i++)
    {
        if(a[i]==c){
            v=i;
            printf("%d\t",v);
            return;
        }
    }

            printf("%d khong co trong mang ",c);


}
int main()
{
    int n, dem ,c, v;
    int a[Max];
    printf("nhap so luong phan tu mang ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("nhap phan tu c:");
    scanf("%d",&c);
    printf("so lan xuat hien %d la %d\n",c,demPhanTu(a,n,dem,c));
    viTriXuatHien(a,n,c,v);
    return 0;
}
