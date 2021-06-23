
/*Nhập ma trận các số thực gồm n hàng và m cột. Nhập vào một số
nguyên k từ bàn phím, tính tổng các phần tử trên hàng k và cột k. Viết lại
ma trận và kết quả ra màn hình.*/
#include<stdio.h>
#define Max_cot 100
#define Max_dong 100
void nhapMang(float m[][Max_cot], int dong, int cot){
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%f",&m[i][j]);
        }
    }
}
void xuatMang(float m[][Max_cot], int dong, int cot){
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4.3f",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void tong(float m[][Max_cot], int dong, int cot, int k){
    float t=0;
    for(int i=0; i<dong; i++){
            if(k<0||k>dong&&k<0||k>cot){
                printf(" %d khong hop le\n",k);
                return;
                }
            else{
                t+=m[i][k];}
    }
        for(int j=0; j<cot; j++){
            if(k<0||k>dong&&k<0||k>cot){
                printf(" %d khong hop le\n",k);
                return;}
            else{
                t+=m[k][j];
            }
        }

    printf("tong phan tu cot %d dong %d la: %.3f\n",k+1,k+1,t);
}
int main()
{
    float m[Max_dong][Max_cot];
    int dong, cot,k;
    printf("nhap dong cot= ");
    scanf("%d%d",&dong, &cot);
    nhapMang(m, dong, cot);
    printf("nhap k= ");
    scanf("%d",&k);
    tong(m, dong, cot, k);
    xuatMang(m, dong, cot);
    return 0;

}
