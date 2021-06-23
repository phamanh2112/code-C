#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int stt;
    char hoten[20];
    char gioitinh[10];
    float diemTB;
}SV;

typedef struct Node
{
    SV data;
    struct Node *next;
}node;

node *first = NULL;

SV nhapThongTinSV()
{
    SV sv;
    printf("\nSTT: ");
    scanf("%d", &sv.stt);
    printf("Ho Ten: ");
    fflush(stdin);
    gets(sv.hoten);
    printf("gioi tinh: ");
    fflush(stdin);
    gets(sv.gioitinh);
    printf("Diem TB: ");
    scanf("%f", &sv.diemTB);
    return sv;
}
node *taoNode()
{
    node* p=(node*)malloc(sizeof(node));
    p->data = nhapThongTinSV();
    p->next = NULL;
    return p;
}
void themDau()
{
    node* p =taoNode();
    first = p;
}
void themODau()
{
    if(first == NULL)
    {
        themDau();
    }
    else{
        node* p= taoNode();
        p->next = first;
        first = p;
    }
}
void nhapDS()
{
    while(1){
        themODau();
        printf("nhaptiep? (y/n)");
        fflush(stdin);
        char chon = getchar();
        if(chon=='n'&& chon=='N')
            break;
    }
}
void hienThi1PhanTu(node* p)
{
    printf("\n%4d | %20s | %10s | %7.2f |\n", p->data.stt, p->data.hoten, p->data.gioitinh, p->data.diemTB);

}
void hienThiDS()
{
    if(first == NULL) {
        printf("danh sach rong");
    }
    else{
        printf("DANH SACH");
        printf("\n%4s | %20s | %10s | %7s |", "STT", "Ho Ten", "GT", "Diem TB");
        for(node *i=first; i != NULL; i = i->next){
            hienThi1PhanTu(i);
        }
    }
}

node* timTen(char tenCanTim[]){
    for(node* i=first;  i!=NULL; i=i->next){
        if(strcmp(tenCanTim, i->data.hoten) == 0)
            return i;
    }
    return NULL;
}

void hienThiNodeTheoTen(char tenCanHienThi[])
{
    node* p = timTen(tenCanHienThi);
    if(p == NULL)
        hienThi1PhanTu(p);
}

int suaTheoTen(char tenCanSua[])
{
    node* p=timTen(tenCanSua);
    if(p==NULL) return 0;
    p->data = nhapThongTinSV();
    return 1;
}
int xoaNode(node* p)
{
    if(p==NULL) return 0;
    if(p==first){
        first = first->next;
        free(p);
        return 1;
    }
    node *tim;
    for(tim=first; tim!=NULL; tim=tim->next);
    tim->next = p->next;
    free(p);
    return 1;
}
int main()
{
    nhapThongTinSV();
    hienThiDS();
    themODau();

}
