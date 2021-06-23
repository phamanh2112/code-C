/* viet chuong trinh nhap vao hai ma tran a b,
sau do tinh tinh tich ma tran c = a*b; in ba ma tran ra man hinh*/
#include <stdio.h>

void matranA(int a1[][100], int dong1, int cot1)
{

      for(int i=0; i<dong1; i++){
        for(int j=0; j<cot1; j++){
            scanf("%d",&a1[i][j]);
        }
      }
       printf("matran A:\n");
      for(int i=0; i<dong1; i++){
        for(int j=0; j<cot1; j++){
            printf("%4d", a1[i][j]);
        }
        printf("\n");
      }


}
void matranB(int a2[][100], int dong2, int cot2)
{

      for(int i=0; i<dong2; i++){
        for(int j=0; j<cot2; j++){
            scanf("%d",&a2[i][j]);
        }
      }
      printf("matran B:\n");
      for(int i=0; i<dong2; i++){
        for(int j=0; j<cot2; j++){
            printf("%4d", a2[i][j]);
        }
        printf("\n");
      }
}

void matranC(int a1[][100], int a2[][100], int a3[][100], int dong, int cot)
{

    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            a3[i][j]=0;
        for (int k=0; k<cot;k++){
            a3[i][j]+= a1[i][k] * a2[k][j];
        }
        }
    }

    printf("matran c: \n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4d", a3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a1[100][100],a2[100][100], a3[100][100];
    int dong1, cot1;
    printf("nhap so dong cot ma tran A: ");
    scanf("%d%d", &dong1, &cot1);
    matranA(a1, dong1, cot1);
    int dong2, cot2;
    printf("nhap so dong cot ma tran B: ");
    scanf("%d%d", &dong2, &cot2);
    matranB(a2, dong2, cot2);
    int dong, cot;
    if(cot1 == dong2 ){
        matranC(a1,a2,a3,dong, cot);
    }
    else{
        printf("hai ma tran khong the nhan");
    }
    return 0;

}

