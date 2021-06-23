/* Nhập ma trận các số thực gồm n hàng và m cột. Tính tổng các phần
tử trên đường viền của ma trận. Viết lại ma trận và kết quả ra màn hình.*/
#include<stdio.h>
#include<math.h>
#define Max_dong 100
#define Max_cot 100
void nhapMang(float m[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%f",&m[i][j]);
        }
    }
}
void xuatMang(float m[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%7.3f", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void tongCacPhanTuVien(float m[][Max_cot], int dong, int cot)
{
    float s=0;
    for(int i=0; i<cot; i++){
        s+=m[0][i];
        s+=m[dong-1][i];
    }
    for(int i=1; i<dong-1; i++){
       s+=m[i][0];
       s+=m[i][cot-1];
    }
    printf("tong cac phan tu thuocj vien cua ma tran la: %.3f",s);

}
int main()
{
    float m[Max_dong][Max_cot];
    int dong, cot;
    printf(" nhap dong cot cua ma tran: ");
    scanf("%d%d", &dong, &cot);
    nhapMang(m, dong, cot);
    xuatMang(m, dong, cot);
    tongCacPhanTuVien(m, dong, cot);
    return 0;

}

