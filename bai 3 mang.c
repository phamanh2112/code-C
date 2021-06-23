
/*Viết chương trình thực hiện các yêu cầu sau:
Nhập dãy gồm n số nguyên dương. Xét xem trong dãy số có số chính
phương (số chính phương là bình phương của 1 số, VD: 4, 9, 16...) không.
Nếu có hãy in ra màn hình các số chính phương. Từ đó tìm số chính phương
lớn nhất, bé nhất trong dãy.*/
#include<stdio.h>
#include<math.h>
#define Max 100
void nhapMang(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
    printf("a[%d]= ",i);
    scanf("%d",&a[i]);
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
int kiemTraSoChinhPhuong(int n)
{
    if(sqrt(n)*sqrt(n)==n)
        return 1;
    return 0;
}
void soChinhPhuong(int a[], int n)
{
    printf("cac so chinh phuong la: ");
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoChinhPhuong(a[i])==1)
          {
            printf("%d\t",a[i]);
          }

    }
}
void soChinhPhuongMax(int a[], int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoChinhPhuong(a[i])==1)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    printf("so chinh phuong lon nhat la: %d",max);
}
void soChinhPhuongMin(int a[], int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoChinhPhuong(a[i])==1)
        {
            if(min>a[i])
            {
                min=a[i];
            }
        }
    }
    printf("so chinh phuong nho nhat la: %d",min);
}
int main()
{
    int n, a[Max];
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    soChinhPhuong(a,n);
    printf("\n");
    soChinhPhuongMax(a,n);
    printf("\n");
    soChinhPhuongMin(a,n);
    return 0;
}
