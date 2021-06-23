/*Viết chương trình tạo một danh sách liên kết thuận của một
lớp sinh viên sau đó thực hiện các công việc sau:
Thực hiện các chức năng theo menu:
1. In danh sách ra màn hình
2. Chèn thêm một sinh viên vào sau một sinh viên có tên nhập từ bàn
phím
3. Xóa một sinh viên có tên nhập từ bàn phím ra khỏi danh sách*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
node* getNode(SV *sv)
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
        p = getNode(sv);
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
        printf("\n----------------------------------------------------------------------\n");
        xuat1SV(k->data);
    }
}
void chenSV(List l)
{
    char HT[30];
    printf("\nnhap ten can chen sau: ");
    fflush(stdin);
    gets(HT);
    node *p;
    SV sv;
    nhap1SV(&sv);
    p= getNode(&sv);
    node *k=l.head;
    while(k != NULL && strcmp(HT,k->data.hoten)!=0){
        k=k->next;
    }
    p->next = k->next;
    k->next = p;
    xuatDSSV(l);
}
void xoaCoTenNHapTuBanPhim(List l)
{
    char HT[30];
    printf("\n nhap ten can xoa: ");
    fflush(stdin);
    gets(HT);
    node *k=l.head;
    node *p;
    while(k != NULL && strcmp(HT, k->data.hoten) != 0)
    {
        p=k;
        k= k->next;
    }
    if(k==NULL)
    {
    printf("khong tim thay ten can xoa");
    }
    else{
            if(l.head==k){
                k->next = l.head->next;
                l.head=k->next;
            }
            else{
    p->next = k->next;
    free(k);
            }
    xuatDSSV(l);
    }
}
int main()
{
    List l;
    SV sv;
    nhapDSSV(&l, &sv);
    int chon;
    do{
        printf("\n\n==========================================================================================\n\n");
        printf("\n1.In danh sach ra man hinh\n ");
        printf("2. Chen them mot sinh vien vao sau mot sinh vien co ten nhap tu ban phim\n");
        printf("3. Xoa mot sinh vien co ten nhap tu ban phim ra khoi danh sach \n");
        scanf("%d", &chon);
        switch(chon){
              case 1: xuatDSSV(l); break;
              case 2: chenSV(l); break;
              case 3: xoaCoTenNHapTuBanPhim(l);
        }
    }while(chon <= 3 && chon >=1);
    return 0;
}
