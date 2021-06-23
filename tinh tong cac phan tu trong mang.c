#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    int *p;
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
         p=&a[i];
         s+=*p;
    }
    printf("tong phan tu trong mang la: %d", s);
    return 0;

}
