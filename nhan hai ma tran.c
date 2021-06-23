#include<stdio.h>
#define Max_cot 100
#define Max_dong 100
void nhapMang1(int m1[][Max_cot], int dong, int cot)
{
    for(int i=0;  i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
}
void xuatMang1(int m1[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            printf("%4d",m1[i][j]);
        }
        printf("\n");
    }
}
void nhapMang2(int m2[][Max_dong], int dong, int cot)
{
    for(int i=0; i<cot; i++)
    {
        for(int j=0; j<dong; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
}
void xuatMang2(int m2[][Max_dong], int dong, int cot)
{
    for(int i=0; i<cot; i++)
    {
        for(int j=0; j<dong; j++)
        {
            printf("%4d",m2[i][j]);

        }
        printf("\n");
    }
}
void nhanHaiMaTRan(int m1[][Max_cot], int m2[][Max_dong], int m3[][Max_dong], int dong, int cot)
{

    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {

            m3[i][j]=0;
            for(int k=0; k<cot; k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<dong; j++)
        {
            printf("%4d",m3[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m1[Max_dong][Max_cot];
    int m2[Max_cot][Max_dong];
    int m3[Max_dong][Max_dong];
    int dong, cot;
    printf("nhap dong.1(cot.2) cot.1(dong.2)= ");
    scanf("%d%d",&dong,&cot);

    printf("nhap mang 1\n");
    nhapMang1(m1,dong,cot);
    printf("mang 1\n");
    xuatMang1(m1, dong, cot);

    printf("\n");

    printf("nhap mang 2\n");
    nhapMang2(m2,dong,cot);
    printf("mang 2\n");
    xuatMang2(m2, dong, cot);
    printf("\n");
    printf("tich hai ma tran\n");
    nhanHaiMaTRan(m1, m2, m3, dong, cot);
    return 0;
}
