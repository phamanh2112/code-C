
/* viet chuong tri�nh c��ng hai ma tr��n C=A+B.
trong �o� d�� li��u v�� n,m va� hai ma tr��n A,B �uo�c l�u va�o t��p 'MA_TRAN.C'
theo da�ng sau : dong ���u ti�n ghi: n,m; do�ng ti�p theo ghi: Ma Tran A;
ca�c do�ng ti��p theo ghi ha�ng cu�a ma tr��n A; do�ng ti��p theo ghi: Ma Tran B;
ca�c do�ng ti��p theo ghi ha�ng cu�a ma tr��n B; ma tr��n t��ng �uo�c b�� sung va�o cu��i t��p tr�n (sd ki��u nh��p xu��t van ba�n)
v��i do�ng ti��p theo ghi: Ma Tran Tong C= A+B;
ca�c do�ng ti��p theo ghi ca�c ha�ng cu�a c;
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
