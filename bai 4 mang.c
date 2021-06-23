/*Viết chương trình nhập dãy gồm n số thực. Đưa tất cả các số âm lÊn
đầu, các số dương xuống cuối và các số 0 đứng giữa, thứ tự không thay
đổi.
-9 8 7 5 -2 0 8
-9 -2 0 8 7 5 8*/

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
void xuatMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
/*void mangXepLai(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        while(i<=n&&a[i]<=0)
        {
            printf("%d\t",a[i]);

            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
        printf("%d\t",a[i]);
        }
    }
    printf("\n");
}
*/



void giaTriAm(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }

    }
    for(int i=0;i<n;i++)
    {
    if(a[i]==0)
        printf("%d\t",a[i]);
    }

}
void giaTriDuong(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d\t",a[i]);
        }
    }
}
void mangXepLai(int a[],int n)
{
    giaTriAm(a,n);
    giaTriDuong(a,n);
}




int main()
{
    int a[Max];
    int n,b,c,k,j;
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
   mangXepLai(a,n);

    return 0;

}

