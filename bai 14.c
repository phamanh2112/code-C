/*viết chƣơng trình nhập vào số liệu bán hàng với n mặt hàng có cấu trúc
gồm các thành phần: Tên hang, đơn giá, số lƣợng, thành tiền (= số lƣợng * đơn
giá). Sau đó hiện ra màn hình theo dạng:
SO LIEU BAN HANG

STT Ten Hang Don gia So luong Thanh tien
1 Sach 5 100 500
2 But 2 300 600*/
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int stt;
    char tenHang[20];
    int donGia;
    int soLuong;
    int tien;
}HH;
typedef struct Node
{
    HH data;
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

void addTail(List *l, node *p)
{
    if(l->head == NULL){
        l->head = l->tail = p;
        p->next = NULL;
    }
    else {
        l->tail->next = p;
        l->tail = p;
        p->next =  NULL;
    }
}
void nhap1HH(HH *hh)
{
    printf("stt: ");
    scanf("%d", &hh->stt);
    printf("ten hang hoa: ");
    fflush(stdin);
    gets(hh->tenHang);
    printf("so luong: ");
    scanf("%d", &hh->soLuong);
    printf("don gia: ");
    scanf("%d", &hh->donGia);
}
node* taoNode(HH *hh)
{
   node *p;
   p = (node*)malloc(sizeof(node));
   if(p == NULL) return NULL;
    p->data = *hh;
    p->next = NULL;
    return p;
}

void nhapDSHH(List *l, HH *hh)
{
    int n;
    printf("so luong hang hoa: ");
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i = 1; i <= n; i++) {
        printf("\nhang hoa %d\n", i);
        nhap1HH(hh);
        printf("\n");
        p = taoNode(hh);
        addTail(l,p);
    }
}
void in1HH(HH hh)
{
    printf("\n%5d | %20s | %7d | %20d | %20d |", hh.stt, hh.tenHang, hh.soLuong, hh.donGia, hh.soLuong * hh.donGia );
}
void inDSHH(List l)
{
    printf("\n=================================danh sach hang hoa=========================================\n");
    printf("\n%5s | %20s | %7s | %20s | %20s |", "STT", "TenHang", "SL", "Gia", "ThanhTien");
    printf("\n---------------------------------------------------------------------------------------------\n");
    node *k;
    for(k=l.head; k != NULL; k=k->next){
        in1HH(k->data);
        printf("\n---------------------------------------------------------------------------------------------\n");

    }
}
int main ()
{
    List l;
    HH hh;
    nhapDSHH(&l, &hh);
    inDSHH(l);
//    nhap1HH(&hh);
//    in1HH(hh);
    return 0;
}
