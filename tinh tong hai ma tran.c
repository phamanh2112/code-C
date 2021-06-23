
#include<stdio.h>
#include<math.h>
#define Max_dong 100
#define Max_cot 100

void nhapMang1(int m1[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
}
void xuatMang1(int m1[][Max_cot], int dong, int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("%4d",m1[i][j]);

        }
        printf("\n");
    }

}
void nhapMang2(int m2[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
}
void xuatMang2(int m2[][Max_cot], int dong, int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("%4d",m2[i][j]);

        }
        printf("\n");
    }

}
void tinhTongHaiMaTran(int m3[][Max_cot], int m1[][Max_cot], int m2[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
     for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("%4d",m3[i][j]);

        }
        printf("\n");
    }
}
int main()
{
    int m1[Max_dong][Max_cot];
    int m2[Max_dong][Max_cot];
    int m3[Max_dong][Max_cot];
    int dong, cot;
    printf("nhap dong cot= ");
    scanf("%d%d",&dong,&cot);
    printf("nhap mang 1\n");
    nhapMang1(m1,dong,cot);
    printf("xuat mang 1\n");
    xuatMang1(m1,dong, cot);

     printf("\n");

    printf("nhap mang 2\n");
    nhapMang2(m2,dong,cot);
    printf("xuat mang 2\n");
    xuatMang2(m2,dong, cot);

    printf("\n");

    printf("tong hai ma tran 1 2 la\n");
    tinhTongHaiMaTran(m3,m1,m2,dong,cot);
    return 0;

}

