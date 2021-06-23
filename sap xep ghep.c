/* nhap hai mang a1[m1] a2[m2]
sap xep 2 mang tang dan
ghep hai mang thanh mang thu 3 van theo thu  tu tang dan
giai phong hai mang */
#include<stdio.h>
#include<stdlib.h>
int* nhapMang(int* n)
{
    printf("\nnhap so luong phan tu: ");
    scanf("%d",n);
    int* pa=(int*)malloc(*n*sizeof(int));
    for(int i=0; i<*n; i++){
        scanf("%d",&pa[i]);
    }
    return pa;
}
void inMang(int* a, int n)
{

  for(int i=0; i<n; i++){
    printf("%d\t", a[i]);
  }
}

void sapXep(int *a,int n)
{

    for(int i=0; i<n; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
    printf("%d\t", a[i]);}
}
void ghepMang(int*a, int*b, int*c,int n1, int n2,int n3)
{
    int i=0;
    int j=0;
    for(int k=0; k<n3; k++)
    {
        if(i<n1&&j<n2)
        {
            if(a[i]<=b[j])

            {
                c[k]=a[i];
                i++;
            }
            else if(a[i]>b[j])
            {
                c[k]=b[j];
                j++;
            }
        }
        else
        {
            if(i==n1)
               {
                c[k]=b[j];
                j++;
               }
            if(j==n2)

            {
                c[k]=a[i];
                i++;
            }
        }
    }
    inMang(c,n3);
}
int* taoMang(int* n)
{
    int *p=(int*)malloc(*(n)*sizeof(int));
    return p;
}
int main ()
{
   int n1,n2, n3=n1+n2;
   int* a1= nhapMang(&n1);
   printf("\nmang 1 vua nhap la: ");
   inMang(a1,n1);
   int* a2= nhapMang(&n2);
   printf("\nmang 2 vua nhap la: ");
   inMang(a2,n2);
   printf("\nmang sap xep 1: ");
   sapXep(a1,n1);
   printf("\nmang sap xep 2: ");
   sapXep(a2,n2);
   printf("\nmang 3 la: ");
   int* a3=taoMang(&n3);
   ghepMang(a1,a2,a3,n1,n2,n3);
   return 0;

}
