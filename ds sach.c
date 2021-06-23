#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ten[20];
    char maNV[20];
    double heSoLuong;
    double phuCap;
}NhanVien;
typedef struct Node
{
    NhanVien data;
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
    if(l->head==NULL){
        l->head=l->tail=p;
        p->next=NULL;
    }
    else {
        l->tail->next = p;
        l->tail=p;
        p->next = NULL;
    }
}

void nhapNhanVien(NhanVien *nv)
{
    fflush(stdin);
    gets(nv->maNV);
    fflush(stdin);
    gets(nv->ten);
    scanf("%d", &nv->heSoLuong);
    scanf("%d", &nv->phuCap);
}
node* getNode(NhanVien *nv)
{
    node *p=(node*)malloc(sizeof(node));
    if(p == NULL ) return NULL;
    p->data = *nv;
    p->next = NULL;
    return p;
}
void nhapDSS(List *l, NhanVien *nv)
{
    int n;
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        nhapSach(nv);
        printf("\n");
        p = getNode(nv);
        addTail(l,nv);
    }
}
void xuatNhanVien(NhanVien nv)
{
    printf("\n %s\t%s\t%lf\t%lf\t%lf", nv.maNV, nv.ten, nv.heSoLuong, nv.phuCap, nv.heSoLuong*2000000+nv.phuCap);
}
void xuatDSS(List l)
{
    node *k;
    for(k=l.head; k != NULL; k=k->next){
        xuat1Sach(k->data);
    }
}
int main ()
{
    List l;
    S s;
    nhapDSS(&l,&s);
    xuatDSS(l);
    return 0;
}
