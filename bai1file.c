/*Viết chương trình đọc file matran.txt với nội dung như sau:
3

1 2 3
4 5 6
7 8 9
3 là kích thước ma trận
• Xuất ma trận vừa đọc từ file ra màn hình
• Sắp xếp ma trận giảm dần
• Ghi ma trận vừa sắp xếp vào file matran1.txt*/
#include<stdio.h>
int main()
{
    FILE *f;
    f = fopen("matran.txt", "w");
    int a[100][100],b[100*100];
    int n;
    int k=0;
    printf("nhap n: ");
    scanf("%d", &n);
    fprintf(f, "%d\n", n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            b[k]= a[i][j];
            k++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            fprintf(f, "%4d", a[i][j]);
        }
       fprintf(f, "\n");
    }
    fclose(f);
    int tmp;
    for(int i=0; i<n*n; i++){
        for(int j=i+1; j<n*n; j++){
            if(b[i] <b[j]){
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
    FILE *f1;
    f1 = fopen("matran1.txt", "w");
    k=0;
    fprintf(f1, "matran sap xep giam dan la: \n");
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            fprintf(f1, "%4d", b[k]);
            k++;
        }

        fprintf(f1, "\n");
    }
    fclose(f1);




    return 0;

}
