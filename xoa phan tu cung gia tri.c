/*nhap mang a[]
sap xep mang tang dan
xoa nhung phan tu cung gia tri trong mang*/
#include<stdio.h>
#include<stdlib.h>
int* nhapMang(int* n)
{
    printf("nhap so luong phan tu: ");
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
void sapXepTang(int* a, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(a+i)>*(a+j))
            {
                int tmp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=tmp;
            }
        }
    }
}
void xoaTrung(int a[],int *n){
   int i,j,k;
   for (i=0;i<(*n)-1;i++){
    j=i+1;
    while (j<*n)
      if (a[i]==a[j]){
         for (k=j;k<(*n)-1;k++) a[k]=a[k+1];
         *n=(*n)-1;
      }
      else j=j+1;
   }
}
int main()
{
    int* a;
    int n;
    a=nhapMang(&n);
    inMang(a,n);
    sapXepTang(a,n);
    printf("\nmang sap xep lai la: ");
    inMang(a,n);
    xoaTrung(a,&n);
    printf("\n mang sap xem lai la: ");
    inMang(a,n);
    return 0;
}
