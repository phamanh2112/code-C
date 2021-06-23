
/*Nhập ma trận vuông cấp n các số thực. Tính tổng các phần tử trên
đường chéo chính, đường chéo phụ. Viết lại ma trận và kết quả ra màn
hình.*/
#include<stdio.h>
#define Max_dong 100
#define Max_cot 100
void nhapMang(float m[][Max_cot], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%f", &m[i][j]);
        }
    }
}
void xuatMang(float m[][Max_dong], int n )
{
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        printf("%7.3f",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
float cheoChinh(float m[][Max_cot], int n)
{
    float t=0;
    for(int i=0; i<n; i++){
         t+=m[i][i];
    }
    return t;
}
float cheoPhu(float m[][Max_cot], int n)
{
    float t=0;
    for(int i=0; i<n; i++){
            t+=m[i][n-i-1];
        }
    return t;
}
void tong(float m[][Max_cot], int n)
{
    float c=0;
    c=cheoChinh(m,n)+cheoPhu(m,n);
    printf("tong= %f",c);

}
int main()
{
    float m[Max_dong][Max_cot];
    int n;
    printf("nhap dong cot= ");
    scanf("%d", &n);
    nhapMang(m, n);
    xuatMang(m, n);
    tong(m,n);
    return 0;

}
