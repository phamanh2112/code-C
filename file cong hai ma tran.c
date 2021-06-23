#include<stdio.h>

int main ()
{
    int a1[100][100], a2[100][100], a3[100][100];
    int d,c;
    printf("nhap so dong, cot: ");
    scanf("%d%d",&d,&c);
    FILE *f;
    f= fopen("MATRAN.c", "w");
    fprintf(f, "MA TRAN A\n");
    for(int i=0; i<d;i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a1[i][j]);
        }
    }
    for(int i=0; i<d;i++){
        for(int j=0; j<c; j++){
            fprintf(f,"%4d", a1[i][j]);
        }
        fprintf(f,"\n");
    }
    fprintf(f, "MA TRAN B\n");
    for(int i=0; i<d;i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a2[i][j]);
        }
    }
    for(int i=0; i<d;i++){
        for(int j=0; j<c; j++){
            fprintf(f,"%4d", a2[i][j]);
        }
        fprintf(f,"\n");
    }

    fclose(f);
    f= fopen("MATRAN.c", "a");
    fprintf(f, "MA TRAN C\n");
    for(int i=0; i<d;i++){
        for(int j=0; j<c; j++){
            a3[i][j] = a1[i][j]+a2[i][j];
        }
    }
    for(int i=0; i<d;i++){
        for(int j=0; j<c; j++){
            fprintf(f,"%4d", a3[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);


}
