#include<stdio.h>

void nhap(int a[], int n)
{
    printf("nhap\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
void xuat(int a[], int n)
{
    printf("xuat\n");
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void Max(int a[], int n)
{
    int d;
    int max;
    printf("phan tu max: ");
    for(int i=0; i<n; i++){
            max=a[0];
            d=0;
            if(max<a[i])
            {
                max=a[i];
                d=i;
            }

    }
    printf("%d\n",max);
    printf("phan tu max o vi tri %d\n",d);
}
void Min(int a[], int n)
{
    int d;
    int min;
    printf("phan tu min: ");
    for(int i=0; i<n; i++){

            min=a[0];
            d=0;
            if(min>a[i])
            {
                min=a[i];
                d=i;
            }
        }
    printf("%d\n",min);
    printf("phan tu min o vi tri %d\n",d);
}
int main()
{
    int a[100];
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    nhap(a,n);
    xuat(a,n);
    Max(a,n);
    Min(a,n);
    return 0;
}
