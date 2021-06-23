/*:Viết chƣơng trình tạo một danh sách liên kết thuận của một lớp
sinh viên: lớp sinh viên gồm có các thành phần: masv, hoten,gioitinh,
diemtb
sau đó thực hiện các công việc sau:
a. In danh sách ra màn hình –
b. Chèn thêm một sinh viên vào sau một sinh viên có tên nhập từ bàn phím
c. Xóa một sinh viên có tên nhập từ bàn phím ra khỏi danh sách*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char masv[7];
    char hoten[30];
    char gioitinh[10];
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
void themdau(List *l, node *p)
{
    if(l->head==NULL){
        l->head=l->tail=p;
        p->next=NULL;
    }
    else {
        p->next=l->head;
        l->head=p;
    }
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
    fflush(stdin);
    printf("nhap ma sv: ");
    gets(sv->masv);
    printf("nhap ho ten: ");
    gets(sv->hoten);
    printf("nhap gioi tinh: ");
    gets(sv->gioitinh);
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
        //themdau(l,p);
        themCuoi(l,p);
    }
}

void xuat1sv(SV sv)
{
   printf("\n%5s|%20s|%10s|%7.1f|",sv.masv, sv.hoten, sv.gioitinh, sv.diemtb);
}
void xuatDSSV(List l)
{
    node *k;
    printf("\n%5s|%20s|%10s|%7s|", "masv", "hoten", "gioitinh", "diemtb");
    for(k=l.head; k!=NULL; k=k->next){
        xuat1sv(k->data);
    }
}
void chenSV(List l)
{
    char HT[30];
    printf("\nnhap ten can chen sau: ");
    fflush(stdin);
    gets(HT);
    node *p;
    SV sv;
    nhap1SV(&sv);
    p= taonode(&sv);
    node *k=l.head;
    while(k != NULL && strcmp(HT,k->data.hoten)!=0){
        k=k->next;
    }
    p->next = k->next;
    k->next = p;
    xuatDSSV(l);
}
void xoaCoTenNHapTuBanPhim(List l)
{
    char HT[30];
    printf("\n nhap ten can xoa: ");
    fflush(stdin);
    gets(HT);
    node *k=l.head;
    node *p;
    while(k != NULL && strcmp(HT, k->data.hoten) != 0)
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
    xuatDSSV(l);
    }
}
int main()
{
    List l;
    SV sv;
    nhapDSLK(&l, &sv);
    xuatDSSV(l);
    //chenSV(l);
    xoaCoTenNHapTuBanPhim(l);
    return 0;
}
