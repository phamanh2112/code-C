
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 100
#define MAX_COL 100

void nhapMang (int m[][MAX_COL], int dong, int cot){
    for (int i=0; i<dong; i++){
        for (int j=0; j<cot; j++){
            scanf("%d",&m[i][j]);
        }
    }
}

void sinhMang (int m[][MAX_COL], int dong, int cot){
    for (int i=0; i<dong; i++){
        for (int j=0; j<cot; j++){
            m[i][j] = rand()%90+10;
        }
    }
}

void inMang (int m[][MAX_COL], int dong, int cot){
    for (int i=0; i<dong; i++){
        for (int j=0; j<cot; j++){
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
}

int coX (int m[][MAX_COL], int dong, int cot, int x){
    for (int i=0; i<dong; i++){
        for (int j=0; j<cot; j++){
            if (m[i][j]==x){
                return 1;
            }
        }
    }
    return 0;
}

int tongMatrix (int m[][MAX_COL], int dong, int cot){
    int tong = 0;
    for (int i=0; i<dong; i++){
        for (int j=0; j<cot; j++){
            tong += m[i][j];
        }
    }
    return tong;
}
int main(){
    srand(time(NULL));
    int m[MAX_ROW][MAX_COL];
    int dong, cot;
    printf("Nhap so dong, so cot: ");
    scanf("%d%d",&dong,&cot);

    sinhMang(m,dong,cot);
    printf("Mang vua nhap la\n");
    inMang(m,dong,cot);
}

/*
    Nhập hoặc sinh mảng 2 chiều có số dòng, cột nhập từ bàn phím
    1.  Hiển thị các phần tử SNT trong mảng, phần tử nào không
        phải SNT thì để trống
    2.  Tính tổng, TBC các phần tử chẵn, lẻ trong mảng
    3.  Nhập 1 mảng m2 có cùng kích thước như mảng m1, tính tổng
        2 mảng
    4.  Nhập mảng m2 có số dòng = số cột mảng m1, nhân m1 x m2
    5.  Liệt kê tần suất xuất hiện của từng phần tử trong mảng
    6.  In mảng theo chiều zigzag tăng dần như sau

    VD: Mảng nhập vào có 3 dòng 3 cột
        5   8   9
        6   5   1
        0   1   7

        Mảng khi in
        0   1   1
        6   5   5
        7   8   9


*/
