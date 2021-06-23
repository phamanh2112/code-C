#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int STT;
    char tenhang[30];
    int dongia;
    int soluong;
    int thanhtien;
}SOLIEU;
typedef struct node
{
    SOLIEU data;
    struct node *next;
}Node;
typedef struct
{
    Node *head, *tail;
}List;
void Init(List *l)
{
    l->head=l->tail=NULL;
}
Node* Getnode(SOLIEU *solieu)
{
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL)  return NULL;
    else
    {
        p->data=*solieu;
        p->next=NULL;
    }
    return p;
}
void Nhap1hang(SOLIEU *solieu)
{
    printf("\nNhap so thu tu: ");
    scanf("%d", &solieu->STT);
    printf("\nNhap ten hang: ");
    fflush(stdin);
    gets(solieu->tenhang);
    printf("\nNhap don gia: ");
    scanf("%d", &solieu->dongia);
    printf("\nNhap so luong: ");
    scanf("%d", &solieu->soluong);
}
void Xuat1hang(SOLIEU solieu)
{
    solieu.thanhtien=solieu.dongia*solieu.soluong;
    printf("\n%-4d|%-10s|%-8d|%-8d|%-10d",solieu.STT,solieu.tenhang,solieu.dongia,solieu.soluong,solieu.thanhtien);
}
//Them cuối
void Themcuoi(List *l, Node *p)
{
        if(l->head==NULL)
        {
           l->head=l->tail=p;
           p->next=NULL;
        }
        else
        {
            l->tail->next=p;
            l->tail=p;
            p->next=NULL;
        }
    }
void NhapDSLK(List *l, SOLIEU *solieu)
{
    int n;
    printf("\nNhap so luong mat hang: ");
    scanf("%d", &n);
    Init(l);
    Node *p;
    for(int i=0; i<n; i++)
    {
        printf("\nNhap mat hang thu %d: ",i+1);
        Nhap1hang(solieu);
        p=Getnode(solieu);
        Themcuoi(l,p);
    }
}
void XuatDSLK(List l)
{
    printf("\n===XUAT SO LIEU BAN HANG===\n");
    printf("\n%-4s|%-10s|%-8s|%-8s|%-10s","STT","Ten hang","Don gia","So luong","Thanh tien");
    for(Node *k=l.head; k!=NULL; k=k->next)
    {
        Xuat1hang(k->data);
    }
}
int main()
{
    List l;
    SOLIEU solieu;
    NhapDSLK(&l,&solieu);
    XuatDSLK(l);
    return 0;
}
