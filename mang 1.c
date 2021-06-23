/* nhap mang n phan tu
1. sap xep tang dan;
2. liet ke cac so nguyen to
3. tim so nt nho nhat trong mang va xoa neu co
4. tim gia tri trung binh cong
5. s tang dan xoa phan tu trung nhau
*/
#include<stdio.h>

#include<time.h>
#define Max 100
/*void sinhMang(int a[], int n)
{
    for(int i=0; i<n;i++)
        a[i]=rand();
}
void hienThiMang(int a[n], int n)
{
   for(int i=0; i<n;i++)
   {
    printf("%d",a[i]);
   }
   printf("\n");
}
*/
void nhapMang(int a[],int n)
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
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void sapXepTang(int a[], int n)
{
    printf("sap xep tang dan la: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}
int kiemTraSoNguyenTo(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    else
    {
        for(int i=2;i<n;i++)
        {
            if (n%i==0)
                return 0;
        }
        return 1;
    }
    return 0;

}
void lietKeSoNguyenTo(int a[], int n)
{
    printf("so nguyen to trong mang: ");
    int t;
    for(int i=0;i<n;i++)
    {
         if(kiemTraSoNguyenTo(a[i])==1)
            {
                printf("%d\t",a[i]);
            }

    }

}
void timSoNguyenToMin(int a[],int n)
{
    int min=-1;
    printf("so nguyen to nho nhat: ");
    for(int i=0;i<n;i++)
    {

        if(kiemTraSoNguyenTo(a[i])==1)
        {
            if(min==-1)
            {
                min=a[i];
            }
            else if(min>a[i])
            {
                  min=a[i];
            }
        }
    }

    printf("%d\t",min);

}
void tinhTBC(int a[], int n, float s)
{
    s=0;
    float d;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        d=s/i;
    }

    printf("TBC= %.2f",d);
}

int main()
{
    int a[Max],n, min,s;
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    sapXepTang(a,n);
    lietKeSoNguyenTo(a,n);
    printf("\n");
    timSoNguyenToMin(a,n);
    printf("\n");
    tinhTBC(a,n,s);
    return 0;
}
