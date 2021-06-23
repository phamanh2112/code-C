#include<stdio.h>


void nhap(int a[][100], int d, int c)
{
    for(int i=0; i<d; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

}
void xuat(int a[][100], int d, int c)
{
    for(int i=0; i<d; i++){
        for(int j=0; j<c; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void tich(int a1[][100], int a2[][100], int a3[][100], int d1, int c2,int c1)
{
    for(int i=0; i<d1; i++){
        for(int j=0; j<c2; j++){
            a3[i][j]=0;
            for(int k=0; k<c1; k++){
               a3[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }

    for(int i=0; i<d1; i++){
        for(int j=0; j<c2; j++){
            printf("%4d", a3[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int a1[100][100],a2[100][100],a3[100][100];
    int d1, c1, c2,d,c;
    printf("nhap d1 c1: ");
    scanf("%d%d",&d1,&c1);
    printf("nhap1\n");
    nhap(a1,d1,c1);
    printf("nhap cot ma tran 2: ");
    scanf("%d", &c2);
    printf("nhap2\n");
    nhap(a2,c1,c2);
    printf("ma tran 1:\n");
    xuat(a1,d1,c1);
    printf("ma tran 2:\n");
    xuat(a2, c1,c2);
    printf("ma tran 3:\n");
    tich(a1,a2,a3,d1,c2,c1);
     return 0;
}
