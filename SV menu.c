/*Bài 1 : Xây dựng chương trình C quản lý sinh viên bằng máng như sau :
Cấu trúc sinh viên gồm các trường :
Masv : Mã sinh viên - kiểu chuỗi có tối đa 3
ký tự Hoten : Họ tên - Kiểu mảng ký tự
Tuoi : Tuổi -Kiêu sổ
Lop : Lớp - Kiểu mảng ký tự
Thực hiện các chức năng theo menu :

1. Chọn 1 để nhập danh sách sinh viên
2. Chọn 2 để hiển thị danh sách sinh viên
3. Chọn 3 để tìm kiếm sinh viên theo tên
4. Chọn 4 để sắp xếp danh sách sinh viên theo chiều tăng dần của mã sinh viên
5. Chọn 5 đề tìm kiểm sinh viên theo mã sinh viên
6. Chọn ý để kết thúc Câu hỏi*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
typedef struct
{
    char masv[4];
    char hoTen[30];
    int tuoi;
    char lop[10];
}SV;

typedef struct Node
{
    SV data;
    struct Node *next;
}node;

typedef struct
{
    node *head, *tail;
}List;

void init(List *l)
{
    l->head = l->tail = NULL;
}

node* taoNode(SV *sv)
{
    node *p;
    p = (node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *sv;
    p->next = NULL;
    return p;
}
void nhap1SV(SV *sv)
{
    printf("Ma SV: ");
    fflush(stdin);
    gets(sv->masv);
    printf("Ho Ten: ");
    gets(sv->hoTen);
    printf("Tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Lop: ");
    fflush(stdin);
    gets(sv->lop);
}
void addTail(List *l, node *p)
{
    if(l->head == NULL){
        l->head = l->tail = p;
        p->next = NULL;
    }
    else{
        l->tail->next = p->next;
        l->tail = p;
        p->next = NULL;
    }
}

void nhapDSSV(List *l, SV *sv)
{
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d",&n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("\nsinh vien thu: %d\n",i+1);
        nhap1SV(sv);
        printf("\n");
        p= taoNode(sv);
        addTail(l, p);
    }
}

void xuat1SV(SV sv)
{
    printf("\n%10s | %30s | %7d | %20s |", sv.masv, sv.hoTen, sv.tuoi, sv.lop);
}
void xuatDSSV(List l)
{
    node *p;
    printf("\n%10s | %30s | %7s | %20s |", "MaSV", "HoTen", "Tuoi", "Lop");
    for(p = l.head; p != NULL; p=p->next){
        xuat1SV(p->data);
    }
}
void timKiem(List l)
{

    node *p;
    char chon[10];
    printf("\nnhap ten sinh vien can tim: ");
    fflush(stdin);
    gets(chon);
    for(p = l.head; p != NULL; p = p->next ){
        if(strcmp(p->data.hoTen, chon) == 0) {
            printf("sinh vien can tim la: ");
            xuat1SV(p->data);
        }
    }
}

void hoanVi(SV *a, SV *b)
{
    SV tmp= *a;
    *a = *b;
    *b=tmp;
}
void sapXepTangMa(List l)
{
    printf("\nsap xep ma sv tang dan: ");
    node *p, *k;
    for(p=l.head; p != NULL; p = p->next){
        for(k = p->next; k != NULL; k = k->next){
            if(strcmp(p->data.masv, k->data.masv) > 0){
                hoanVi(&p->data, &k->data);
            }
        }
    }
    xuatDSSV(l);
}
void timKiemMa(List l)
{
    char MA[20];
    printf("nhap ma sv can tim: ");
    fflush(stdin);
    gets(MA);
    node *k;
    for(k=l.head; k!=NULL; k=k->next){
         if(strcmp(k->data.masv, MA) == 0) {
            printf("\nsinhvien can tim la\n");
            xuat1SV(k->data);
    }
}
}
int main()
{
    List l;
    SV sv;
    int chon;
    do{
        printf("1. nhap danh sach sinh vien\n");
        printf("2. xuat danh sach sinh vien\n");
        printf("3. tim kiem sinh vien theo ten\n");
        printf("4. sap xep tang dan the ma\n");
        printf("5. tim kiem theo ma sv\n");
        printf("6. chon de ket thuc");
        printf("\n-------------------------------------------------------------------------------\n");
        printf("moi chon: ");
        scanf("%d",&chon);
        switch(chon){
              case 1: nhapDSSV(&l, &sv);
                      printf("\n-------------------------------------------------------------------------------\n");
              break;
              case 2:
                  xuatDSSV(l);
                  printf("\n-------------------------------------------------------------------------------\n");
              break;
              case 3:
                timKiem(l);
                printf("\n-------------------------------------------------------------------------------\n");
              break;
              case 4:
                sapXepTangMa(l);
                printf("\n-------------------------------------------------------------------------------\n");
            break;
            case 5:
                timKiemMa(l);
                printf("\n-------------------------------------------------------------------------------\n");
            break;
            default:
                printf("Chi nhap tu 1-7\n");
        }
        printf("Bam nut bat ky de ve menu");
        getch();
        system("cls");
        }while(chon<=7 && chon>0);
    return 0;
}

