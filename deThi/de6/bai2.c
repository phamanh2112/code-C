
/* viet chuong triÌnh côòng hai ma trâòn C=A+B.
trong ğoì dıŞ liêòu vêÌ n,m vaÌ hai ma trâòn A,B ğuoòc lıu vaÌo têòp 'MA_TRAN.C'
theo daòng sau : dong ğâÌu tiên ghi: n,m; doÌng tiêp theo ghi: Ma Tran A;
caìc doÌng tiêìp theo ghi haÌng cuÒa ma trâòn A; doÌng tiêìp theo ghi: Ma Tran B;
caìc doÌng tiêìp theo ghi haÌng cuÒa ma trâòn B; ma trâòn tôÒng ğuoòc bôÒ sung vaÌo cuôìi têòp trên (sd kiêÒu nhâòp xuâìt van baÒn)
võìi doÌng tiêìp theo ghi: Ma Tran Tong C= A+B;
caìc doÌng tiêìp theo ghi caìc haÌng cuÒa c;
*/
#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100];
    int dong, cot;
    int chon;
    while(1){
        printf("--------------MENU-------------\n");
        printf("1) nhap ma tran\n");
        printf("2) ghi ma tran bo sung\n");
        printf("3) ket thuc\n");
        printf("lua chon: ");
        scanf("%d", &chon);
        switch(chon)
        {
        case 1:
            printf("ban da chon nhap ma tran\n");
            FILE *f;
            f = fopen("MATRAN.C", "w");
            printf("nhap dong, cot: ");
            scanf("%d%d", &dong, &cot);
            fprintf(f, "%d, %d\n", dong, cot);
            printf("nhap ma tran A\n");
            fprintf(f, "Ma Tran A:\n");
            for(int i=0; i<dong; i++){
                for(int j=0; j<cot; j++){
                    scanf("%d", &a[i][j]);
                }
            }
            for(int i=0; i<dong; i++){
                for(int j=0; j<cot; j++){
                    fprintf(f, "%4d", a[i][j]);
                }
                fprintf(f, "\n");
            }
            printf("\nnhap ma tran B\n");
            fprintf(f, "\nMa Tran B :\n");
            for(int i=0; i<dong; i++){
                for(int j=0; j<cot; j++){
                    scanf("%d", &b[i][j]);
                }
            }
            for(int i=0; i<dong; i++){
                for(int j=0; j<cot; j++){
                    fprintf(f, "%4d", b[i][j]);
                }
                fprintf(f, "\n");
            }
            fclose(f);
            break;
            case 2:
                printf("ban da chon ghi ma tran bo sung\n");
                f = fopen("MATRAN.C", "a");
                fprintf(f, "\nMA TRAN C\n");
                for(int i=0; i<dong; i++){
                    for(int j=0; j<cot; j++){
                        c[i][j] = a[i][j] + b[i][j];
                    }
                }
                for(int i=0; i<dong; i++){
                    for(int j=0; j<cot; j++){
                        fprintf(f, "%4d", c[i][j]);
                    }
                    fprintf(f, "\n");
                }
                fclose(f);
                break;
            case 3:
                exit(0);
            default:
                printf("chi nhap tu 1 den 3");
        }
    }
    return 0;

}
