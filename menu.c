#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

typedef struct
{
     int stt;
     char hoTen[20];
     char gioiTinh[10];
     float diemTB;
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

node* taoNode(SV *sv)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *sv;
    p->next = NULL;
    return p;
}


void themCuoi(List *l,node *p)
{
    if(l->head == NULL){
        l->head = l->tail =p;
        p->next = NULL;
    }
    else {
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
    }
}

void nhap1SV( SV *sv)
{
    printf("STT: ");
    scanf("%d", &sv->stt);
    printf("Ho ten: ");
    fflush(stdin);
    gets(sv->hoTen);
    printf("Gioi tinh: ");
    fflush(stdin);
    gets(sv->gioiTinh);
    printf("DiemTB: ");
    scanf("%f", &sv->diemTB);
}

void nhapDS(List* l, SV *sv)
{
    int n;
    printf("nhap so luong sv: ");
    scanf("%d", &n);
    node* p;
    init(l);
    for(int i=0; i<n; i++){
        printf("\tsinh vien thu: %d\n",i+1);
        nhap1SV(sv);
        printf("\n");
        p= taoNode(sv);
        themCuoi(l, p);
    }
}

void hienThi1SV(SV sv)
{
     printf("\n| %3d | %20s | %10s | %5.2f |\n", sv.stt, sv.hoTen, sv.gioiTinh, sv.diemTB );
}

void hienThiDS(List l)
{
    node *p;
    printf("\n| %3s | %20s | %10s | %5s |\n", "STT", "HoTen", "GT", "DiemTB");
    for(p=l.head; p != NULL; p=p->next){
        hienThi1SV(p->data);
    }
}
void themSV(List l)
{
  char HT[20];
  printf("\nten sinh vien chen sau: ");
  fflush(stdin);
  gets(HT);
  node *k=l.head;
  SV sv;
  node *p;
  p=taoNode(&sv);

  nhap1SV(&sv);
  while(k!=NULL && strcmp(HT, k->data.hoTen) != 0 ){
    k=k->next;
  }
   if(k==NULL){
    printf("khong tim thay ten sinh vien can chen sau");
    return;
   }
   else {
        p->next= k->next;
        k->next = p;
   }
   hienThiDS(l);
}

void xoaSV(List l)
{
    char HT[20];
    printf("\nten sinh vien chen sau: ");
    fflush(stdin);
    gets(HT);
    node *k=l.head;
    node *p;
    SV sv;
    while(k!=NULL && strcmp(HT, k->data.hoTen) != 0 ){
         p = k;
         k=k->next;
   }
   if(k == NULL){
    printf("khong tim thay ten can xoa");
   }
   else{
     if(k = l.head){
        l.head->next = k->next;
        l.head = k;
     }
     else{
        p->next = k->next;
        free(k);
     }
   }
   hienThiDS(l);
}
void menu()
{
    printf("--------------MENU--------------\n");
    printf("1. nhap danh sach sinh vien\n");
    printf("2. xuat danh sach sinh vien\n");
    printf("3. chen them mot sinh vien\n");
    printf("4. xoa 1 sinh vien\n");
    printf("5. sua sv\n");
}
int main()
{
    List l;
    SV sv;
    int chon;
    do{
    menu();
    printf("moi chon: ");
    scanf("%d", &chon);
    switch(chon)
    {
        case 1:
            printf("ban da chon nhap ds sinh vien\n");
            nhapDS(&l, &sv);
            break;
        case 2:
            printf("ban da chon xuat  ds sinh vien\n");
            hienThiDS(l);
            break;
        case 3:
            printf("ban da chon them mot sv\n");
            themSV(l);
            break;
        case 4:
            printf("ban chon xoa 1 sv\n");
            xoaSV(l);
            break;
//        case 5:
//             printf("ban chon sua 1 sv\n");
//             suaSV(l);
//             break;
        case 0:
            printf("thoat chong trinh");
        default:
            printf("chi chon tu 0->5\n");
    }
    printf("nhap mot phim bat ki de tro ve menu\n");
    getch();
    system("cls");

    }while(chon >=0 && chon<=5);
    return 0;

}


