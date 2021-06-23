/*Viết chương trình làm việc với tệp chứa một danh sách sinh viên của một lớp, mỗi sinh viên gồm
các thành phần: họ tên, điểm trung bình. Chƣơng trình gồm các chức năng sau:
• 1. Tạo tệp
• 2. them một sinh viên

• 3. xuất thông tin sinh viên
• 4. Kết thúc*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct
{
    int stt;
    char hoTen[30];
    float diemTB;

}SV;

typedef struct node
{
    SV data;
    struct node *next;
}node;

typedef struct{
    node *head, *tail;
}List;

void init(List *l)
{
    l->head = l->tail = NULL;
}

node* taoNode(SV *sv)
{
    node* p=(node*)malloc(sizeof(node));
    if(p == NULL) return NULL;
    p->data = *sv;
    p->next = NULL;
    return p;
}

void themCuoi(List *l, node *p)
{
    if(l->head == NULL){
        l->head = l->tail =p;
        p->next = NULL;
    }
    else {
        l->tail->next  = p;
        l->tail = p;
        p->next = NULL;
    }
}

void nhap1SV(SV *sv)
{
    printf("STT: ");
    scanf("%d", &sv->stt);
    printf("Ho Ten: ");
    fflush(stdin);
    gets(sv->hoTen);
    printf("Diem TB: ");
    scanf("%f", &sv->diemTB);
}

void nhapDS(List *l, SV *sv)
{
    int n;
    printf("So luong SV: ");
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("\tSinh vien thu %d\n", i+1);
        nhap1SV(sv);
        printf("\n");
        p = taoNode(sv);
        themCuoi(l, p);
    }
}

void hienThi1SV(SV sv)
{
    printf("\n| %3d | %20s | %5.3f |\n", sv.stt, sv.hoTen, sv.diemTB);
}

void hienThiDS(List l)
{
    node *k;
    printf("\n\t Danh Sach \n");
    printf("\n| %3s | %20s | %5s |\n", "STT", "Ho Ten", "dienTB");
    for(k=l.head; k!=NULL; k=k->next){
        hienThi1SV(k->data);
    }

}
void menu()
{
    printf("1)tao tep\n2)them mot sinh vien\n3)xuat danh sach sinh vien\n4)ket thuc\nlua chon: ");
}
int main()
{
    List l;
    SV sv;
    FILE *f;
    int chon;

    do{
        menu();
        scanf("%d", &chon);
        switch(chon){
          case 1:
              f = fopen("danhSachSinhVien.bin", "wb");
              fprintf(f, "\n| %3s | %20s | %5s |\n","STT", "Ho Ten", "dienTB");
              printf("tao thanh cong");
              printf("\n nhan phim bat ki de tro ve menu");
              getch();
              system("cls");

              break;
          case 2:
              nhapDS(&l, &sv);
              node *p;
              p = l.tail;
              fprintf(f, "\n| %3d | %20s | %5.3f |\n", sv.stt, sv.hoTen, sv.diemTB);
              getch();
              system("cls");
              break;
          case 3:
            hienThiDS(l);
            getch();
            system("cls");
            break;

        }
    }while (chon!=0);
    fclose(f);
    return 0;
}

