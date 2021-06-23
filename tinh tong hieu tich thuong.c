#include<stdio.h>

void tinh(int a, int b, int* pTong, int* pHieu, int* pTich, float* pThuong )
{
    *pTong=a+b;
    *pHieu=a-b;
    *pTich=a*b;
    *pThuong=(float)a/b;
}
int main()
{
    int a, b;
    int Tong, Hieu, Tich;
    float Thuong;
    scanf("%d%d", &a,&b);
    tinh(a,b,&Tong,&Hieu,&Tich,&Thuong) ;
    printf("tong= %d\n", Tong);
    printf("Hieu= %d\n", Hieu);
    printf("Tich= %d\n", Tich);
    printf("thuong= %f\n", Thuong);
    return 0;
}
