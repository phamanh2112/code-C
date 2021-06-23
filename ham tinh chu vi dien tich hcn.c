// hamf tinhs dien tich chu vi cua hcn vois a , b vaf 2 con tro

#include<stdio.h>
void dienTichChuVi(int a, int b, int* pcv, int* pdt)
{
    *pcv=(a+b)*2;
    *pdt=(a*b);
}
int main ()
{
    int a,b;
    printf("nhap a,b= ");
    scanf("%d%d",&a,&b);
    int DT,CV;
    int *pdt=&DT;
    int *pcv=&CV;
    dienTichChuVi(a,b,pcv,pdt);
    printf("dien tich: %d va chu vi: %d",DT,CV);
    return 0;
}
