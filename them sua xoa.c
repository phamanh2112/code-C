#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int  stt;
    char hoten[30];
    int tuoi;
    float diemtb;
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
node* taonode(SV *sv)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    if(p==NULL) return NULL;
    p->data = *sv;
    p->next =NULL;
    return p;

}

void themCuoi(List *l, node *p)
{

    if(l->head==NULL){
        l->head = l->tail = p;
        p->next = NULL;
    }
    else{
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
    }

}
void nhap1SV(SV *sv)
{

    printf("nhap stt: ");
    scanf("%d",&sv->stt);
    printf("nhap ho ten: ");
    fflush(stdin);
    gets(sv->hoten);
    printf("nhap tuoi: ");
    scanf("%d",&sv->tuoi);
    printf("nhap diem trung binh: ");
    scanf("%f", &sv->diemtb);
}
void nhapDSLK(List *l, SV *sv)
{
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d",&n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("sinh vien thu %d:\n ",i+1);
        nhap1SV(sv);
        printf("\n");
        p= taonode(sv);
        themCuoi(l,p);
    }
}

void xuat1sv(SV sv)
{
   printf("\n%5d|%20s|%10d|%7.1f|",sv.stt, sv.hoten, sv.tuoi, sv.diemtb);
}
void xuatDSSV(List l)
{
    node *k;
    printf("\n%5s|%20s|%10s|%7s|", "stt", "hoten", "tuoi", "diemtb");
    for(k=l.head; k!=NULL; k=k->next){
        xuat1sv(k->data);
    }
}

void chenSV(List l)
{
    char ht[30];
    printf("nhap ho ten can chen sau: ");
    fflush(stdin);
    gets(ht);
    SV sv;
    nhap1SV(&sv);
    node*p;
    p = taonode(&sv);
    node *k=l.head;
    while(k!=NULL && stricmp(ht, k->data.hoten) !=0){
        k=k->next;
    }
    if(k==NULL)
        printf("khong tim thay ten can chen sau");
    else{
        p->next = k->next;
        k->next = p;
    }
    xuatDSSV(l);

}
void xoaCoTenNHapTuBanPhim(List l)
{
    char ht[30];
    printf("nhap ho ten can xoa: ");
    fflush(stdin);
    gets(ht);
    SV sv;
    node*p;
    node *k=l.head;
    while(k!=NULL && stricmp(ht, k->data.hoten) !=0){
        p=k;
        k=k->next;
    }
    if(k == NULL)
        printf("khong tim thay ten can xoa");
    else{
        if(k == l.head){
             k->next=l.head->next;
            l.head = k->next;
        }
        else{
            p->next = k->next;
            free(k);
        }
    }
    xuatDSSV(l);

}

void sua(List l)
{
    char ht[30];
    printf("nhap ho ten can sua: ");
    fflush(stdin);
    gets(ht);
    SV sv;
    node *k=l.head;
    printf("nhap ten da sua: ");
    char Ten[30];
    fflush(stdin);
    gets(Ten);

    while(k!=NULL && stricmp(ht, k->data.hoten) !=0){
        k=k->next;
    }
    if(k==NULL)
        printf("khong tim thay ten can sua");
    else{
        strcpy(Ten, k->data.hoten);
    }
    xuatDSSV(l);
}
int main()
{
    List l;
    SV sv;
    nhapDSLK(&l, &sv);
    printf("\n............................................................................\n");
    xuatDSSV(l);
    printf("\n............................................................................\n");
    chenSV(l);
    printf("\n............................................................................\n");
    xoaCoTenNHapTuBanPhim(l);
    printf("\n............................................................................\n");
    sua(l);
    printf("\n............................................................................\n");


//    sapXepGiamHT(l);
//    xuatDSSV(l);
//    printf("\n............................................................................\n");
//    sapXepTangHT(l);
//    xuatDSSV(l);
//    printf("\n............................................................................\n");
//    lietKeSinhVien(l);
//    printf("\n............................................................................\n");
//    timKiemSV(l);
//    printf("\n............................................................................\n");

    return 0;
}
