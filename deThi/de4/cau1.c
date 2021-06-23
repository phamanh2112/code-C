/* viết chuong trình nhập vào ma trận An*n sau đó tìm giá trị lớn nhất
giá trị nhỏ nhất của ma trận này. in ma trận cùng kết quả tìm được ra màn hình*/
#include<stdio.h>
void maTran(int a[][100], int dong, int cot)
{

    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("ma tran vua nhap la\n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
void Max(int a[][100], int dong, int cot)
{
     int max=a[0][0];
     for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            if(max< a[i][j])
                max= a[i][j];
        }
     }
     printf("\nMax = %d\n", max);
}
void Min(int a[][100], int dong, int cot)
{
     int min=a[0][0];
     for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            if(min> a[i][j])
                min= a[i][j];
        }
     }
     printf("Min = %d", min);
}
int main ()
{
    int a[100][100];
    int dong, cot;
    printf("nhap dong, cot: ");
    scanf("%d%d", &dong, &cot);
    maTran(a, dong, cot);
    Max (a,dong, cot);
    Min(a, dong, cot);
    return 0;
}
