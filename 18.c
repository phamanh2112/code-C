/*Viết chương trình tạo một danh sách liên kết thuận của một
lớp sinh viên sau đó thực hiện các công việc sau:
Thực hiện các chức năng theo menu:
1. In danh sách ra màn hình
2. Chèn thêm một sinh viên vào sau một sinh viên có tên nhập từ bàn
phím
3. Xóa một sinh viên có tên nhập từ bàn phím ra khỏi danh sách*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char maLop[7];
    char tenLop[20];
    int slSV;
}LH;

typedef struct Node
{
    LH data;
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

node* getNode(LH *lh)
{
    node *p;
    p = (node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *lh;
    p->next = NULL;

}

void addTail(List *l, node *p)
{
    if(l->head == NULL){
        l->head = l->tail = p;
        p->next = NULL;
    }
    else {
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
    }
}

void nhap1LH(LH *lh)
{
    fflush(stdin);
    printf("ma lop: ");
    gets(lh->maLop);
    printf("ten lop: ");
    gets(lh->tenLop);
    printf("sl sinh vien: ");
    scanf("%d", &lh->slSV);
}

void nhapDSLH(List *l, LH *lh)
{
    int n;
    printf("\nso luong lop hoc: ");
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("\nlop thu %d:\n", i+1);
        nhap1LH(lh);
        printf("\n");
        p = getNode(lh);
        addTail(l, p);
    }
}
void in1Lh(LH lh)
{
    printf("\n %7s | %20s | %10d |", lh.maLop, lh.tenLop, lh.slSV);
}
void inDSLH(List l)
{
    printf("\n-------------------DANH SACH LOP HOC--------------");
    printf("\n %7s | %20s | %10s |", "Ma Lop", "Ten Lop", "SL sv");
    printf("\n---------------------------------------------------\n");
    node *p;
    for(p = l.head; p != NULL; p = p->next){
        in1Lh(p->data);
        printf("\n---------------------------------------------------\n");
   }
}
void chen(List l)
{
    char TL[20];
    printf("nhap ten sv can chen sau: ");
    fflush(stdin);
    gets(TL);
    node *p;
    LH lh;
    nhap1LH(&lh);
    p = getNode(&lh);
    node *k = l.head;
    while( k != NULL && strcmp(TL, k->data.tenLop) != 0){
        k = k->next;
    }
    p->next = k->next;
    k->next = p;
    printf("\ndanh sach sau khi chen la: ");
    inDSLH(l);
}
void xoaCoTenNHapTuBanPhim(List l)
 {
     char TL[30];
     printf("nhap ten lop can xoa: ");
     fflush(stdin);
     gets(TL);
     node *p;
     node *k = l.head;
     while(k != NULL && strcmp(TL, k->data.tenLop) !=0){
        p = k;
        k = k->next;
     }
     if(k == NULL){
        printf("\n khong tim thay ten can xoa");
     }
     else {
        if(l.head == NULL){
            k->next = l.head->next;
            l.head = k->next;
        }
        else {
            p->next = k->next;
            free(k);
        }
     }
     inDSLH(l);

 }
int main ()
{
    List l;
    LH lh;
    nhapDSLH(&l, &lh);
    inDSLH(l);
    chen(l);
    xoaCoTenNHapTuBanPhim(l);

    return 0;
}
