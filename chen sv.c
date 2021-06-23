#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

typedef struct
{
   char Ho_Ten[30];
   int tuoi;
   float Diem_Tb;
}SinhVien;

typedef struct Node
{
    SinhVien data;
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

node* taoNode(SinhVien *sv )
{
    node *p;
    p=(node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *sv;
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
 void nhap1SV(SinhVien *sv)
 {
     printf("Ho Ten: ");
     fflush(stdin);
     gets(sv->Ho_Ten);
     printf("Tuoi: ");
     scanf("%d", &sv->tuoi);
     printf("Diem TB: ");
     scanf("%f", &sv->Diem_Tb);
 }

 void nhapDSSV(List *l, SinhVien *sv)
 {
     int n;
     printf("nhap so luong sv: ");
     scanf("%d", &n);
     node *p;
     init(l);
     for(int i=0; i<n; i++){
        printf("sinh vien thu %d\n", i+1);
        nhap1SV(sv);
        printf("\n");
        p= taoNode (sv);
        themCuoi(l, p);
     }

 }

 void hienThi1SV(SinhVien sv)
 {
     int i;
     printf("|%5d | %20s | %10d | %6.2f| \n", ++i, sv.Ho_Ten, sv.tuoi, sv.Diem_Tb);
 }
 void HienTHiDSSV(List l)
 {
     node *p;
     printf("\tDANH SACH SINH VIEN\n");
     printf("|%5s | %20s | %10s | %6s| \n", "STT", "HO TEN", "TUOI", "DIEM TB");
     for(p=l.head; p!=NULL; p=p->next){
        hienThi1SV(p->data);
     }
 }

 void chen(List l)
 {
     char ht[30];
     printf("nhap ten sinh vien can chen sau: ");
     fflush(stdin);
     gets(ht);
     node *p;
     SinhVien sv;

     nhap1SV(&sv);
     p=taoNode(&sv);
     node *k= l.head;
     while(k != NULL&&strcmp(ht, k->data.Ho_Ten) != 0){
        k= k->next;
     }
     p->next = k->next ;
     k->next= p;
     HienTHiDSSV(l);

 }
 void menu()
 {
    printf("1. nhap DDSSV\n");
    printf("2. xuat DDSSV\n");
    printf("3. chen 1 sinh vien vao DDSSV\n");
    printf("0. thoat\n");
    printf("Lua chon: ");

 }
 int main ()
 {
     List l;
     SinhVien sv;
     int c;
     do{
        menu();
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            nhapDSSV(&l, &sv);
            getch();
            system("cls");
            break;
         case 2:
            HienTHiDSSV(l);
            getch();
            system("cls");
            break;

         case 3:
             chen(l);
            getch();
            system("cls");
            break;
         case 0:
            exit(0);
        }
     }while(c>=0&&c<4);
     return 0;
 }
