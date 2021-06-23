#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char masv[8];
    char hoten[25];
    char gt[9];
    float dtb;
} SV;
void NHAP(SV sv[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n SV thu %d\n",i+1);
        printf("ma SV: ");
        fflush(stdin);
        gets(sv[i].masv);
        printf("ho ten: ");
        fflush(stdin);
        gets(sv[i].hoten);
        printf("gioi tinh: ");
        fflush(stdin);
        gets(sv[i].gt);
        printf("diem TB: ");
        scanf("%f",&sv[i].dtb);
    }
}
void Xuat(SV sv[], int n)
{
    printf("\n%8s | %25s | %9s | %7s |\n","Ma SV","Ho ten","Gioi tinh","Diem TB");
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n%8s | %25s | %9s | %7.2f |\n",sv[i].masv,sv[i].hoten,sv[i].gt,sv[i].dtb);
    }
}
void tangdan(SV sv[], int n)
{
    SV tg;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            if(sv[j].dtb < sv[i].dtb)
            {
                tg=sv[i];
                sv[i]=sv[j];
                sv[j]=tg;
            }
    }
    printf("\nSAP XEP THEO THU TU DIEM TANG DAN\n");
    Xuat(sv,n);
}
void diem5(SV sv[], int n)
{
    printf("\nDIEM TRUNG BINH >= 5\n");
    for(int i=0; i<n; i++)
        if(sv[i].dtb>=5) printf("\n%8s | %25s | %9s | %7.2f |\n",sv[i].masv,sv[i].hoten,sv[i].gt,sv[i].dtb);
}
void dem_nam(SV sv[], int n)
{
    int dem=0;
    printf("\n SV NAM LA: \n");
    for(int i=0; i<n; i++)
        if(strcmp(sv[i].gt,"nam") ==0){
            dem++;
        }
    printf("%d\n\n",dem);
}
void tim_msv(SV sv[], int n)
{
    char ma[8];
    int check=0;
    printf("NHAP MA SV CAN TIM: ");
    fflush(stdin);
    gets(ma);
    for(int i=0; i<n; i++)
        if(strcmp(sv[i].masv, ma)==0)
        {
            printf("\n%8s| %25s | %9s | %7.2f|\n",sv[i].masv,sv[i].hoten,sv[i].gt,sv[i].dtb);
            check=1;
        }
    if(check==0) printf("\nKhong tim thay\n\n");
}
void in_ten(SV sv[], int n)
{
    char ten[8];
    int check=0;
    printf("NHAP TEN SV CAN TIM: ");
    fflush(stdin);
    gets(ten);
    for(int i=0; i<n; i++)
        if(strstr(sv[i].hoten,ten)!=0)
        {
            printf("%-8s|%-25s|%-9s|%-7.2f\n",sv[i].masv,sv[i].hoten,sv[i].gt,sv[i].dtb);
            check=1;
        };
    if(check==0) printf("\nKhong tim thay\n\n");
}
void hoten_tang(SV sv[], int n)
{
    SV tg;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(sv[i].hoten, sv[i+1].hoten)>0)
            {
                tg=sv[i];
                sv[i]=sv[i+1];
                sv[i+1]=tg;
            }
    printf("\nSAP XEP THEO THU TU HO TEN TANG DAN\n");
    Xuat(sv,n);
}
int main()
{
    SV sv[50];
    int n;
    printf("Nhap so SV: ");
    scanf("%d",&n);
    NHAP(sv,n);
    printf("\n-------------------------------------------------------\n");

    Xuat(sv,n);
    printf("\n-------------------------------------------------------\n");

    tangdan(sv,n);
    printf("\n-------------------------------------------------------\n");

    diem5(sv,n);
    printf("\n--------------------------------------------------------\n");

    dem_nam(sv,n);
    printf("\n---------------------------------------------------------\n");

    tim_msv(sv,n);
    printf("\n---------------------------------------------------------\n");

    in_ten(sv,n);
    printf("\n---------------------------------------------------------\n");

    hoten_tang(sv,n);
    printf("\n---------------------------------------------------------\n");

    return 0;
}
