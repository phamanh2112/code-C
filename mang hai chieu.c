#include<stdio.h>
#include<math.h>
#define Max_dong 100
#define Max_cot 100

void nhapMang(int m[][Max_cot], int dong, int cot)
{
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
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("%4d",m[i][j]);

        }
        printf("\n");
    }

}

int  tinhTong(int m[][Max_cot], int dong, int cot)
{
    int s=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            s+=m[i][j];

        }
    }
    return s;

}
int kiemTraSoChan(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
void TBCChanTuChan(int m[][Max_cot],int dong, int cot)
{
    float t=0;
    int dem=0,d=0;
    float s = 0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(kiemTraSoChan(m[i][j]))
            {
                s+= m[i][j];
                dem++;
            }
        }
    }
    float tbc = s/dem;
    printf("tbc so chan %f\n",tbc);

}
void TBCChanTuLe(int m[][Max_cot],int dong, int cot)
{
    int dem=0;
    float s = 0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(!(kiemTraSoChan(m[i][j])))
            {
                s+= m[i][j];
                dem++;
            }
        }
    }
    float tbc = s/dem;
    printf("tbc so le %f",tbc);

}

int main()
{
    int m[Max_dong][Max_cot];
    int dong, cot;
    printf("nhap dong cot= ");
    scanf("%d%d",&dong,&cot);

    printf("nhap mang \n");
    nhapMang(m,dong,cot);
    printf("mang xuat ra la\n");
    xuatMang(m,dong,cot);



    tinhTong(m,dong,cot);
    printf("tong cac phan tu la: %d \n",tinhTong(m,dong,cot));
    TBCChanTuChan(m,dong,cot);
    TBCChanTuLe(m,dong,cot);
    return 0;
}
