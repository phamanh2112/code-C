
/*Viết chương trình thực hiện các yêu cầu sau:
Nhập từ bàn phím một dãy số gồm n số thực. Yêu cầu:
a. In ra màn hình số lớn nhất.
b. Sắp xếp lại dãy số theo trật tự tăng dần.
c. Tính trung bình cộng các phần tử âm
In kết quả ra màn hình.*/
#include<stdio.h>
#define Max 100
void nhapMang(float a[], int n)
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
void xapXepTang(float a[], int n)
{
    printf("day sap xep tang la: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                float tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%.2f\t",a[i]);

    }

}

void tinhTrungBinhCongSoAm(float a[], int n)
{
    int d=0;
    float s;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            d+=a[i];
            s=d/i;
        }
    }
    printf("TBC= %.2f",s);


}
int main()
{
    int n;
    float s;
    float a[Max];
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    xapXepTang(a,n);
    printf("\n");
    tinhTrungBinhCongSoAm(a,n);
    return  0;
}
