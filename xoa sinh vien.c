#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

typedef struct
{
    char hoTen[30];
    int tuoi;
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
    node *p=(node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *sv;
    p->next = NULL;
    return p;
}
void themCuoi(List *l, node*p)
{
    if(l->head == NULL){
        l->head = l->tail = p;
        p->next = NULL;
    }
    else {
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
    }
}
void nhap1SV(SV *sv)
{
    printf("HoTen: ");
    fflush(stdin);
    gets(sv->hoTen);
    printf("Tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("diemTB: ");
    scanf("%f", &sv->diemTB);
}

void nhapDS(List *l, SV *sv)
{
    int n;
    printf("nhap so luong sv: ");
    scanf("%d", &n);
    node*p;
    init(l);
    for(int i=0; i<n; i++)
    {
        printf("nhap sv thu %d\n", i+1);
        nhap1SV(sv);
        printf("\n");
        p=taoNode(sv);
        themCuoi(l,p);
    }
}
void hienThi1sv(SV sv)
{
    int i;
    printf("%5d | %20s | %7d | %7.2f \n", ++i, sv.hoTen, sv.tuoi,  sv.diemTB);
}
void hienTHiDS(List l)
{
    node *p;
    printf("\tDANH SACH SINH VIEN\n");
    printf("%5s | %20s | %7s | %7s\n","STT", "hoTen", "tuoi", "diem TB");
    for(p=l.head; p!=NULL; p=p->next){
        hienThi1sv(p->data);
    }
}
void menu()
{
    printf("1. nhap danh sach sinh vien\n");
    printf("2. xuat danh sach sinh vien\n");
    printf("3. xoa 1 sinh vien cos ten nhap tu ban phim trong danh sach sinh vien\n");
    printf("0. thoat\n");
    printf("lua chon: ");
}
void xoa(List l){
    char ht[30];
    printf("nhap ten can xoa: ");
    fflush(stdin);
    gets(ht);
    node*p;
    node*k=l.head;
    while(k!=NULL && stricmp(ht, k->data.hoTen) != 0){
        p= k;
        k= k->next;
    }
    if(k==NULL)
        printf("khong tim thay ten can xoa");
    else{
        if(l.head == k)
        {
            l.head->next = k->next;
            l.head = k->next;
        }
        else {
            p->next = k->next;
            free(k);
        }
    }
  hienTHiDS(l);
}
int main ()
{
    List l;
    SV sv;
    int c;
    while(1){
        menu();
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            nhapDS(&l,&sv);
            getch();
            system("cls");
            break;
        case 2:
            hienTHiDS(l);
            getch();
            system("cls");
            break;
        case 3:
            xoa(l);
            getch();
            system("cls");
            break;
        case 0:
            exit(0);
        default:
            printf("moi nhap lai");
            getch();
            system("cls");
            break;
        }
    }
}
