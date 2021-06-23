/* viet chuong trinh gom co 1 ham nhap vao cac he so cua 1 da thuc
1 ham tinh gia tri da thuc 1 ham in cac he so cua da thuc .
sau do : nhap vao he so cua hai da thuc P=an * x^n + an-1*x^(n-1) + . . . + a1*x + a0 ;
Q=bm*x^m + bm- 1* x^(m-1) + . . . + b1*x + b0 ,nhap gia tri x; tinh he so cua da thuc T=P+Q;
roi in ra he so cua da thuc, in ra gia tri x, in ra gia tri cua da thuc*/

#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<conio.h>

void nhapHeSoDaThuc(int m[][100], int d, int c)
{
    for(int i=0; i<=c; i++ ){
        scanf("%d", &m[d][i]);
    }
}

void tinhTong(int m[][100], int c)
{
    for(int i=0; i<=c; i++){
        m[2][i] = m[1][i] + m[0][i];
    }
}
void hienThiHeSoDaThuc(int m[][100], int d, int c)
{
    for(int i=0; i<=c; i++){
        if(m[d][i]!=0){
            printf("%4d", m[d][i]);
        }
        else printf("%4s", " ");
    }
    printf("\n");
}
void   giaTriBieuThuc(int m[][100], int c, float x)
{
    float s=0;
    for(int i=0;i<=c; i++){
        s+=m[2][i]* pow(x,i);
    }
    printf("gia tri cua bieu thuc la : %f", s);
}

int main ()
{
    int m[3][100]={0};
    int d, c1,c2;
    float x;
    printf("nhap bac he so da thuc P: ");
    scanf("%d", &c1);
    printf("nhap he so da thuc P: ");
    nhapHeSoDaThuc(m, 0, c1);
    printf("\n");
    printf("nhap bac he so da thuc Q: ");
    scanf("%d", &c2);
    printf("nhap he so da thuc Q: ");
    nhapHeSoDaThuc(m, 1, c2);
    printf("\n");
    printf("\n");
    tinhTong(m, c1>c2?c1:c2);
    printf("he so ba da thuc lan luot la:\n");
    printf("he so da thuc P: ");
    hienThiHeSoDaThuc(m, 0, c1);
    printf("he so da thuc Q: ");
    hienThiHeSoDaThuc(m, 1, c2);
    printf("he so da thuc T: ");
    hienThiHeSoDaThuc(m, 2, c1>c2?c1:c2);
    printf("nhap gia tri cua x: ");
    scanf("%f", &x);
    int c3 = c1>c2?c1:c2;
    giaTriBieuThuc(m,c3,x);
    return 0;
}
