/*
viet chuong trinh tao ra  danh sach lien  ket thuan de ghi danh sach
cac sinh vien cos cau truc gom cac thanh phan Ho_ten, Tuoi,Diem_TB
in ra danh sach  theo dang
                DANH SACH SINH VIEN
    STT         Ho ten          Tuoi         Ðiem TB
    ....          ...
-cheÌn them 1 sinh vien (coì ten nhâòp týÌ baÌn phiìm ) vaÌo sau sinh vien nao ðoì (coì tên nhâp tý baÌn phiìm ),
rôÌi  in ra maÌn hiÌnh danh saìch theo daòng trên*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
 typedef struct
 {
     char Ho_ten[30];
     int Tuoi;
     float Dien_TB;
 }SV;

 typedef struct Node
 {
     SV data;
     struct Node *next;
 } node;

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
     if(l->head ==NULL){
        l->head = l->tail = p;
        p->next = NULL;
     }
     else{
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
     }
 }

 void nhap1SV (SV *sv)
 {
     printf("HoTen: ");
     fflush(stdin);
     gets(sv->Ho_ten);
     printf("Tuoi: ");
     scanf("%d", &sv->Tuoi);
     printf("Diem TB: ");
     scanf("%f", &sv->Dien_TB);
 }

 void nhapDS(List *l, SV *sv)
 {
     int n;
     printf("nhap so luong sinh vien: ");
     scanf("%d", &n);
     node *p;
     init(l);
     for(int i=0; i<n; i++){
        printf("\tSinh Vien Thu: %d\n",i+1);
        nhap1SV(sv);
        printf("\n");
        p = getNode(sv);
        addTail(l, p);
     }
 }

 void xuat1sv(SV sv)
 {
     int i;
     printf("| %5d | %20s | %6d | %10.1f |\n", ++i, sv.Ho_ten, sv.Tuoi, sv.Dien_TB);


 }

 void xuatDS(List l)
 {
     node *p;
     int i;
     printf("\t\tDANH SACH SINH VIEN\n");
     printf("| %5s | %20s | %6s | %10s |\n", "STT", "Ho ten", "Tuoi", "Diem Tb");
     for(p=l.head, i=1; p!=NULL; p=p->next){
        xuat1sv(p->data);
     }
 }

 void chenThem(List l)
 {
     char Ht[30];
     printf("\nnhap ten can chen sau: ");
     fflush(stdin);
     gets(Ht);
     SV sv;
     node *p;
     nhap1SV(&sv);
     p = getNode(&sv);
     node *k= l.head;

     while( k != NULL && strcmp(Ht, k->data.Ho_ten) != 0){
        k= k->next;
     }
     if(k== NULL){
        printf("khong tim thay ten can tim");
        return;
     }
     else{
        p->next =k->next ;
        k->next = p;
     }
     printf("danh sach sau :\n");
     xuatDS(l);
 }
 void Menu()
{
    printf("1) nhap danh sach sinh vien\n");
    printf("2) xuat danh sach sinh vien\n");
    printf("3 chen them 1 sinh vien sau 1 sinh vien co ten nhap tu ban phim\n");
    printf("4. xoa sinh vien nhap tu ban phim\n");
    printf("5. sap xep sinh vien\n");
    printf("0) thoat chuong trinh\n");
    printf("------------------------------------------------\n");
    printf("lua chon: ");
}
void xoaCoTenNHapTuBanPhim(List l)
{
    char HT[30];
    printf("\n nhap ten can xoa: ");
    fflush(stdin);
    gets(HT);
    node *k=l.head;
    node *p;
    while(k != NULL && strcmp(HT, k->data.Ho_ten) != 0)
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
    xuatDS(l);
    }
}
 void hoanVi(SV *a, SV *b)
{
    SV tmp= *a;
    *a = *b;
    *b=tmp;
}
void sapXepGiamHT(List l)
{
    printf("\nsap xep ho ten giam dan: ");
    node *p, *k;
    for(p=l.head; p != NULL; p = p->next){
        for(k = p->next; k != NULL; k = k->next){
            if(strcmp(p->data.Ho_ten, k->data.Ho_ten) < 0){
                hoanVi(&p->data, &k->data);
            }
        }
    }
}
void sapXepTangHT(List l)
{
    printf("\nsap xep ho ten tang dan: ");
    node *p, *k;
    for(p=l.head; p != NULL; p = p->next){
        for(k = p->next; k != NULL; k = k->next){
            if(strcmp(p->data.Ho_ten, k->data.Ho_ten) > 0){
                hoanVi(&p->data, &k->data);
            }
        }
    }
}
 int main ()
 {
     List l;
     SV sv;
     int chon;
     do{
       Menu();
       scanf("%d", &chon);
       switch(chon)
       {
        case 1:
            nhapDS(&l,&sv);
            getch();
            system("cls");
            break;
        case 2:
            printf("\tDANH SACH SINH VIEN\n");
            xuatDS(l);
            getch();
            system("cls");
            break;
        case 3:
            chenThem(l);
            getch();
            system("cls");
            break;
        case 4:
            xoaCoTenNHapTuBanPhim(l);
            getch();
            system("cls");
            break;
        case 5:
            sapXepGiamHT(l);
            xuatDS(l);
            sapXepTangHT(l);
            xuatDS(l);
            getch();
            system("cls");
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("nhap lai so tu 0 den 3");
        }
    }while (chon >= 0 && chon <=5);

     return 0;

 }



