/*Nhập ma trận các số thực gồm n hàng và m cột. Tính tổng các phần
tử trên đường viền của ma trận. Viết lại ma trận và kết quả ra màn hình.*/
#include<stdio.h>
#define Max_dong 100
#define Max_cot 100
void nhapMang(int m[][Max_cot], int dong, int cot)
{
    printf("nhap ma tran\n");
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}
void xuatMang(int m[][Max_cot], int dong, int cot)
{
    printf(" mang vua nhap la:\n");
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void tongVienPhanTu(int m[][Max_cot], int dong, int cot)
{
    int t=0;
    for(int i=0; i<cot; i++)
    {
        t+=m[0][i];
        t+=m[cot-1][i];
    }
    for(int j=1; j<dong-1; j++)
    {
        t+=m[j][0];
        t+=m[j][dong-1];
    }

    printf("tong cac phan tu o vien la = %d",t);
}
int main()
{
    int m[Max_dong][Max_cot];
    int dong, cot;
    printf("nhap dong cot= ");
    scanf("%d%d",&dong, &cot);
    nhapMang(m,dong,cot);
    xuatMang(m,dong, cot);
    tongVienPhanTu(m, dong, cot);
    return 0;

}
