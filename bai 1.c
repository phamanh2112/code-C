/*Sử dụng mảng cấu trúc
Cấu trúc một sinh viên gồm: masv, hoten,gioitinh, diemtb
1. Sử dụng dslk để nhập một danh sách gồm n sinh viên
2. Xuất ra danh sách sinh viên vừa nhập
3. Sắp xếp ds tăng dần theo điểm trung bình
4. Liệt kê sinh viên có diemtb&gt;=5
5. Đếm số lượng sinh viên nam
6. Tìm kiếm sinh viên theo masv
7. Đưa ra những sinhvien có tên nhập từ bàn phím
8. Sắp xếp hoten tăng dẫn*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char masv[10];
    char hoten[30];
    char gioitinh[10];
    float diemTB;
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
    p=(node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *sv;
    p->next = NULL;
    return p;
}
void addTail(List *l, node *p)
{
    if(l->head == NULL) {
        l->head = l->tail = p;
        p->next = NULL;
    }
    else {
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
    }
}
void nhap1SV(SV *sv)
{
    fflush(stdin);
    printf("ma sv: ");
    gets(sv->masv);
    printf("ho ten: ");
    gets(sv->hoten);
    printf("gioi tinh: ");
    gets(sv->gioitinh);
    printf("diem trung binh: ");
    scanf("%f", &sv->diemTB);
}
void nhapDSSV(List *l, SV *sv)
{
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i = 1; i <= n; i++) {
        printf("\nsinh vien thu %d\n", i);
        nhap1SV(sv);
        printf("\n");
        p = taoNode(sv);
        addTail(l,p);
    }
}
void xuat1SV(SV sv)
{
    printf("\n %7s | %20s | %10s | %7.1f |", sv.masv, sv.hoten, sv.gioitinh, sv.diemTB);
}
void xuatDSSV(List l)
{
    node *k;
    printf("\n %7s | %20s | %10s | %7s |", "Ma SV", "Ho Ten", "Gioi Tinh", "Diem TB");
    for(k=l.head; k!=NULL; k=k->next) {
        xuat1SV(k->data);
    }
}
int hoanVi(SV *a, SV *b)
{
    SV tmp = *a;
    *a = *b;
    *b = tmp;
}
void sapXepTangTHeoDiem(List l)
{
    printf("danh sach sap xep theo chieu tang cua diem tb la: \n");
    node*i, *j;
    for(i = l.head; i != NULL; i = i->next) {
        for(j = i->next; j != NULL; j=j->next) {
            if(i->data.diemTB > j->data.diemTB)
                hoanVi(&i->data, &j->data);
        }

    }
}
void lietKeSinhVien(List l)
{
    printf("\n sing vien co diem tb>=5:\n");
    node *p;
    int dem=0;
    for(p=l.head; p!=NULL; p=p->next) {
        if(p->data.diemTB >= 5){
            xuat1SV(p->data);
            dem++;
        }
    }
    printf("\nso sinh vien co diem tb>=5 la: %d\n", dem);
}
void demSVNam(List l)
{
    printf("\n  thanh vien nam la: ");
    node *p;
    int dem=0;
    for(p=l.head; p!=NULL; p=p->next){
        if(strcmp(p->data.gioitinh, "nam") == 0 ) {
            xuat1SV(p->data);
            dem++;
        }
    }
     printf("\nso thanh vien nam la: %d\n", dem);
}
void timKiemSV(List l)
{

    node *p;
    char chon[10];
    printf("\nnhap ma sinh vien can tim: ");
    fflush(stdin);
    gets(chon);
    for(p = l.head; p != NULL; p = p->next ){
        if(strcmp(p->data.masv, chon) == 0) {
            printf("sinh vien can tim la: ");
            xuat1SV(p->data);
        }
    }
}
// dua ras nhung ten sinh vien co ten nhap tu ban phim
void inTen(List l)
{
    char HT[20];
    printf("\nnhap ten sinh vien can in ra man hinh: ");
    fflush(stdin);
    gets(HT);
    node *p;
    for(p = l.head; p != NULL; p = p->next ) {
        if( strcmp(p->data.hoten, HT) == 0){
           xuat1SV(p->data);
        }
    }
}
// sap xep ho ten tang dan
void sapXepTangHT(List l)
{
    printf("\nsap xep ho ten tang dan: ");
    node *p, *k;
    for(p=l.head; p != NULL; p = p->next){
        for(k = p->next; k != NULL; k = k->next){
            if(strcmp(p->data.hoten, k->data.hoten) > 0){
                hoanVi(&p->data, &k->data);
            }
        }
    }
}
int main()
{
    List l;
    SV sv;
    nhapDSSV(&l, &sv);
    xuatDSSV(l);
    printf("\n");
    printf("\n-------------------------------------------------------------------------\n");
    sapXepTangTHeoDiem(l);
    xuatDSSV(l);
    printf("\n-------------------------------------------------------------------------\n");
    lietKeSinhVien(l);
    printf("\n-------------------------------------------------------------------------\n");
    demSVNam(l);
    printf("\n-------------------------------------------------------------------------\n");
    timKiemSV(l);
    printf("\n-------------------------------------------------------------------------\n");
    inTen(l);
    printf("\n-------------------------------------------------------------------------\n");
    sapXepTangHT(l);
    xuatDSSV(l);
    return 0;
}
