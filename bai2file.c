
/*Viết chương trình đọc file matran2.txt với nội dung như sau:
3
4
1 2 3 3
4 5 6 2
7 8 9 1
3 là kích thước ma trận
• Xuất ma trận vừa đọc từ file ra màn hình
• Sắp xếp ma trận giảm dần
• Ghi ma trận vừa sắp xếp vào file matran3.txt*/
#include<stdio.h>
int main()
{
    FILE *f;
    int a[100][100], b[100*100];
    int dong, cot;
    int k=0;
    int tmp;
    f = fopen("matran2.txt", "w");
    printf("nhap dong cot: ");
    scanf("%d%d", &dong, &cot);
    fprintf(f, "%d\n", dong);
    fprintf(f, "%d\n", cot);
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d", &a[i][j]);
            b[k] = a[i][j];
            k++;
        }
    }
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            fprintf(f, "%4d", a[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    for(int i=0; i<dong*cot; i++){
        for(int j=0; j<dong*cot; j++){
            if(b[i]>b[j]){
               tmp = b[i];
               b[i] = b[j];
               b[j] = tmp;
            }
        }
    }
    FILE *f1;
    f1 = fopen("matran3.txt", "w");
    k=0;
    fprintf(f1, "ma tran sap xep dam dan la:\n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            fprintf(f1, "%4d", b[k]);
            k++;
        }
        fprintf(f1, "\n");
    }
    return 0;

}
