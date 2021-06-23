#include<stdio.h>
void nhapChuoi(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
         scanf("%d", &a[i]);

    }
}
void inChuoi(int a[], int n)
{
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
}
int ktAm(int n)
{
        if(n<0)
            return 1;
        return 0;
}
int ktDuong(int n)
{
        if(n>0)
            return 1;
        return 0;
}

void xuat(int a[], int n)
{
    for(int i=0; i<n; i++){
       if(ktAm(a[i]))
          printf("%d",a[i]);
       printf("\n");
       if(ktDuong(a[i]))
        printf("%d",a[i]);
    }

}
int main()
{
    char a[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d",&n);
    nhapChuoi(a, n);
    xuat(a,n);
    return 0;
}
