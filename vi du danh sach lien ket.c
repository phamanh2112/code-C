#include<stdio.h>
#include<stdlib.h>
//khai bao cau truc sinh vien
typedef struct
{
    char masv[7];
    char hoten[30];
    char gioitinh[3];
    float diemtb;
}SINHVIEN;
//khai bao mot node
typedef struct Node
{
    SINHVIEN data;
    struct Node *next;

}Node;
//khai bao mot danh sach lien ket
typedef struct
{

    Node *head ,*tail;

}LIST;
//khoi tao danh sach rong
void lnit(LIST *l)
{
    l->head=NULL;
    l->tail=NULL;

}
void  Nhap1SV(SINHVIEN *sv)
{
    printf ("\nnhap masv: ");
    fflush(stdin);
    gets(sv->masv);
    printf("\nnhap hoten: ");
    fflush(stdin);
    gets(sv-> hoten);
    printf("\nnhap gioitinh: ");
    fflush(stdin);
    gets(sv->gioitinh);
    printf("\nnhap diemtb: ");
    scanf("%f",&sv->diemtb);

    }
Node* Getnode(SINHVIEN *sv)
{
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
        return NULL;
    p->data=*sv;
    p->next=NULL;
}
void themdau(LIST *l, Node *p)
     {
         if (l->head==NULL)
         {
             l->head=l->tail=p;
             p->next=NULL;

         }
         else
         {
             p->next=l->head;
             l->head=p;

         }
     }
void nhapDSLK(LIST *l,SINHVIEN *sv)
     {
         int n;
         printf("\nnhap so sinh vien: ");
         scanf("%d",&n);
         Node *p;
         //goi ham khoi tao danh sach rong
         lnit(l);
         int i;
         for (i=0;i<n;i++)
         {
             printf("\nnhap sinh vien thu %d: ",i+1);
             Nhap1SV(sv);
             p=Getnode(sv);
             themdau(l,p);


         }

     }
void xuat1sv(SINHVIEN sv)
     {
         printf("\n%5s|%20s|%5s|%5.1f|",sv.masv,sv.hoten,sv.gioitinh,sv.diemtb);
     }
void xuatDSSV(LIST l)
     {
         printf("\ndanh sach sinh vien");
         printf("\n%5s|%20s|%5s|%5s|","masv","hoten","gt","dtb");
         Node *k;
         for (k=l.head;k!=NULL;k=k->next)
            xuat1sv(k->data);

     }
void hoanvi(SINHVIEN *a,SINHVIEN *b)
     {
         SINHVIEN t=*a;
         *a=*b;
         *b=t;
     }
void sapxeptang(LIST l)
    {
        Node *i,*j;
        for(i=l.head; i!=NULL; i=i->next)
            for(j=i->next;j!=NULL;j=j->next)
            if(i->data.diemtb>j->data.diemtb)
            hoanvi(&i->data,&j->data);

    }
    int main()
    {
        LIST l;
        SINHVIEN sv;
        nhapDSLK(&l,&sv);
        xuatDSSV(l);
        sapxeptang(l);
        xuatDSSV(l);
        return 0;

    }

