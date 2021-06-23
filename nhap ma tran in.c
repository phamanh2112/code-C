//nhap ma tran m1[d][c], in ra file"matran.txt"
//nhap ma tran m1[d][c], in vao cuoifile"matran.txt"
//ting tong 2 ma trsn m1 m2 luu vao m tong in vao cuoi cuoifile"matran.txt"
#include<stdio.h>
#include<stdlib.h>

void maTran1(int m1[][100], int dong, int cot)
{
    FILE *f1=NULL;
    f1 = fopen("matran.txt", "w");
    fprintf(f1, "ma tran 1: \n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            fprintf(f1, "%4d", m1[i][j]);
        }
        fprintf(f1, "\n");
    }
    fclose(f1);

}

void maTran2(int m2[][100], int dong, int cot)
{
    FILE *f2=NULL;
    f2 = fopen("matran.txt", "a");
    fprintf(f2, "ma tran 2: \n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            fprintf(f2, "%4d", m2[i][j]);
        }
        fprintf(f2, "\n");
    }
    fclose(f2);

}
void TongHaiMaTran(int m1[][100], int m2[][100], int m3[][100], int dong, int cot)
{
    FILE *f3;
    f3 = fopen("matran.txt", "a");
    fprintf(f3, "matran Tong: \n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            fprintf(f3, "%4d", m3[i][j]);
        }
        fprintf(f3, "\n");
    }
    fclose(f3);
}


int main()
{
    int m1[100][100], m2[100][100], m3[100][100];
    int dong, cot;
    printf("nhap dong, cot: ");
    scanf("%d%d", &dong, &cot);

    maTran1(m1,dong, cot);

    maTran2(m2, dong, cot);

    TongHaiMaTran(m1, m2, m3, dong, cot);
    return 0;
}

