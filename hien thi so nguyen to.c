#include<stdio.h>
#define Max_cot 100
#define Max_dong 100

void nhapMang(int m[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0;j<cot; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}
void xuatMang(int m[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
}

int kiemTraSNT(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n>2)
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }

}
void hienThiSNT(int m[][Max_cot], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            if(kiemTraSNT(m[i][j])==1)
                printf("%4d",m[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }
}
int main()
{
    int m[Max_dong][Max_cot];
    int dong, cot;
    printf("nhap dong cot= ");
    scanf("%d%d",&dong,&cot);
    printf("nhap mang\n");
    nhapMang(m,dong,cot);
    printf("mang vua nhap\n");
    xuatMang(m,dong, cot);

    printf("mang SNT\n");
    hienThiSNT(m,dong,cot);
    return 0;
}
