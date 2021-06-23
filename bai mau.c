/*nhap 1 mang va in cac phan tu cua mang ra ngoai*/


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
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}
int tong(int a[], int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s;

}
int soLe(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            return 1;
    }
    return 0;
}
int soLonNhat(int a[], int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}

int main()
{
    int a[Max];
    int n;
    printf("nhap so luong phan tu mang: ");
    scanf("%d",&n);

    nhapMang(a,n);
    xuatMang(a,n);

    printf("tong cac phan tu la %d\n",tong(a,n));
    printf("so cac phan tu le trong mang %d\n",soLe(a,n));
    printf(" phan tu lon nhat trong mang %d\n",soLonNhat(a,n));


    return 0;
}
