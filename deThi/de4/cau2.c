/* viêìt chıõng triÌnh taòo ra môòt danh saìch thuâòn ğêÒ ghi danh saìch sinh viên
coì câìu truìc gôÌm caìc thaÌnh phâÌn Ho_ten, Tuoi, Diem_TB
in ra danh saìch coì daòng
STT          Ho ten         Tuoi        DiemTB
......          .....
xoìa môòt sv (coì ten nhap tı baÌn phiìm), rôÌi in laòi danh saìch theo ğaòng trên */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct
{
    char Ho_Ten[30];
    int Tuoi;
    float DiemTB;
}SV;

typedef struct node
{
    SV data;
    struct node *next;
}node;

typedef struct
{
    node *head, *tail;
}List;

void init(List *l)
{
    l->head = l->tail = NULL;
}

node* taoNode(SV *sv, node *p)
{
    p=(node*)malloc(sizeof(node));
    if(p == NULL ) return NULL;
    p->data= *sv;
    p->next = NULL;
    return p;
}
void themCuoi(List *l, node *p)
{
    if(l->head == NULL){
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
    printf("Ho Ten: ");
    fflush(stdin);
    gets(sv->Ho_Ten);
    printf("Tuoi: ");
    scanf("%d", &sv->Tuoi);
    printf("Diem TB: ");
    scanf("%f", &sv->DiemTB);
}

void nhapDS(List *l, SV *sv)
{
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("sinh vien thu %d\n", i+1);
        nhap1SV(sv);
        printf("\n");
        p = taoNode(sv,p);
        themCuoi(l, p);
    }
}

void hienThi1SV(SV sv)
{
    int i;
    printf("\n%4d%20s%10d%10.2f\n", ++i, sv.Ho_Ten, sv.Tuoi, sv.DiemTB);
}
void hienTHiDS(List l)
{
    node *p;
    int i;
    printf("\n%4s%20s%10s%10s\n", "STT", "Ho Ten", "Tuoi", "Diem TB");
    for(p=l.head, i=1; p!=NULL; p=p->next){
        hienThi1SV(p->data);
    }
}

void xoaCoTenNHapTuBanPhim(List l)
{
    char HT[30];
    printf("nhap trn can xoa: ");
    fflush(stdin);
    gets(HT);
    node *k=l.head;
    node *p;
    while(k != NULL && strcmp(HT, k->data.Ho_Ten) != 0){
        p=k;
        k=k->next;
    }
    if(k == NULL){
        printf("khong tim thay ten can xoa");

    }
    else{
        if(k == l.head){
            k->next = l.head->next;
            l.head = k->next;
        }
        else{
            p->next = k->next;
            free(k);
        }
    }
    hienTHiDS(l);
}

void Menu()
{
    printf("1) nhap danh sach sinh vien\n");
    printf("2) xuat danh sach sinh vien\n");
    printf("3 xoa 1 sinh vien co ten nhap tu ban phim\n");
    printf("0) thoat chuong trinh\n");
    printf("------------------------------------------------\n");
    printf("lua chon: ");
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
            hienTHiDS(l);
            getch();
            system("cls");
            break;
        case 3:
            xoaCoTenNHapTuBanPhim(l);
            getch();
            system("cls");
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("nhap lai so tu 0 den 3");
        }
    }while (chon >= 0 && chon <=3);
    return 0;
}
