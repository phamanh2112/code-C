#include<stdio.h>

void nhap(int m[][100], int dong, int cot)
{
    printf("nhap mang\n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d",&m[i][j]);
        }
    }
}
void xuat(int m[][100], int dong, int cot)
{
    printf(" xuat mang\n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void Max(int m[][100], int dong, int cot)
{
    int max;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            max=m[0][0];
            if(max<m[i][j]){
                  max=m[i][j];
            }
        }
    }
    printf("phan tu max= %d\n",max);
}
void Min(int m[][100], int dong, int cot)
{
    int min;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            min=m[0][0];
            if(min>m[i][j]){
                  min=m[i][j];
            }
        }
    }
    printf("phan tu min= %d\n",min);
}
int main()
{
    int m[100][100];
    int dong, cot;
    printf("nhap dong, cot: ");
    scanf("%d%d",&dong,&cot);
    nhap(m, dong, cot);
    xuat(m, dong, cot);
    Max(m, dong, cot);
    Min(m, dong, cot);
    return 0;
}

