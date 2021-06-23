/*viết chương trình nhập vào một mảng gồm n dòng, m cột.
tính:
a. Tổng các phần tử có số tận cùng bằng 6. In kết quả
b. Tìm phần tử lớn nhất trong mảng. in kết quả
c. Đếm số phần tử chẵn chia hết cho 3
d. Tính tổng các phần tử ở hàng 2. In kết quả
e. Trung bình cộng các phần tử trên cột 2
f. Tìm phần tử lớn nhất
g. Đếm số phần tử chẵn chia hết cho 3
h. Tính tổng các phần tử nằm trên đường chéo chính. In kết
quả
i. In ra các phần tử trên đường chéo phụ*/
#include<stdio.h>
#define Max 100
void nhapMang(int m[][Max], int dong, int cot){
     for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d",&m[i][j]);
        }
     }
}
void xuatMang(int m[][Max], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int KiemTra(int n)
{
    if(n%10==6)
        return 1;
    return 0;
}
void tongCacSoTanCungBang6(int m[][Max], int dong, int cot)
{
    int t=0;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
                if(KiemTra(m[i][j]))
                    t+=m[i][j];
            }
    }

    printf("tong tat ca cac phan tu co so tan cung la 6 la: %d\n",t);
}
void phanTuMax(int m[][Max], int dong, int cot)
{
    int max=m[0][0];
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            if(m[i][j]>max)
            max=m[i][j];
        }
    }
    printf("phan tu lon nhat trong mang la: %d\n", max);
}

int KiemTraChan(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
int kiemTraSoChiaHetCho3(int n)
{
    if(n%3==0)
        return 1;
    return 0;
}
void demPhanTuChanChiHetCho3(int m[][Max], int dong, int cot)
{
    int dem=0;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            if(KiemTraChan(m[i][j])){
                if(kiemTraSoChiaHetCho3(m[i][j])){
                    dem++;
                }
            }
        }
    }
    printf("ma tran co %d so chan chia het cho 3\n", dem);
}
void tongHang2(int m[][Max], int dong, int cot)
{
    int t=0;
    int k=1;
    for(int j=0; j<cot; j++){
            t+=m[k][j];
    }
    printf("tong cac phan tu hang hai la: %d",t);
    printf("\n");

}
void TBCCot2(int m[][Max], int dong, int cot)
{
    float TBC=0;
    int t=0;
    int k=1;
    for(int i=0; i<dong; i++){
            t+=m[i][k];
    }
        TBC=t/dong;
    printf("tbc cua cot hai la: %f\n",TBC);
}
int main()
{
    int m[Max][Max];
    int dong, cot;
    printf("nhap so dong cot: ");
    scanf("%d%d", &dong, &cot);
    printf("nhap mang\n");
    nhapMang(m, dong, cot);
    printf("xuat mang\n");
    xuatMang(m, dong, cot);
    tongCacSoTanCungBang6(m, dong, cot);
    demPhanTuChanChiHetCho3(m, dong, cot);
    phanTuMax(m, dong, cot);
    tongHang2(m, dong, cot);
    TBCCot2(m, dong, cot);
    return 0;
}
