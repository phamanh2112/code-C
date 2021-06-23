#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int amount;
    int value;
} Produce;

typedef struct Tnode
{
    Produce data;
    struct Tnode *next;
} Tnode;

typedef struct list
{
    Tnode *first, *last;
} list;

void init(list *l)
{
    l->first=l->last=NULL;
}

void scan_sp(Produce *sp)
{
    gets(sp->name);
    scanf("%d", &sp->amount);
    scanf("%d", &sp->value);
}

void print_sp(Produce *sp)
{
    printf("%s%10d%10d\n",sp->name, sp->amount, sp->value);
}

Tnode* create_node(Produce *sp)
{
    Tnode *p;
    p = (Tnode*)malloc(sizeof(Tnode));
    if(p==NULL)
        return NULL;
    p->data=*sp;
    p->next=NULL;
    return p;
}

void AddHead(list *l,Produce *sp)
{

    Tnode *p ;
    p = create_node(sp);
    if(l->first==NULL)
        l->first=l->last=p;
    else
    {
        p->next=l->first;
        l->first=p;
    }
}

void print_list(list l)
{
    Tnode *k;
    for(k=l.first; k!=NULL; k=k->next)
    {
        printf("%s%10d%10d\n",k->data.name, k->data.amount, k->data.value);
    }
}

void delete_node(list *l)
{
    char ht[20];
    gets(ht);
    Tnode *k;
    Tnode *p;
    k=l->first;
    while (k!=NULL &&strcmp(k->data.name,ht)!=0)
    {
        p=k;
        k=k->next;
    }
    if (k==NULL) {}
    else
    {
        //nếu phân tủ cần xóa ở đàu hoặc cuối
        if (k->	next ==NULL)
            p->next =NULL;
        else if (k==l->	first )
            l->first =k->next ;
        //nếu phần tử cần xóa nằm ở giữa.đi đến phần tử đứng trước phần tử cần xóa, lưu địa chỉ k, cho k->next lưu giữ ptu của pt đứng sau
        else
            p->next =k->next ;
        free(k);
    }
}

void fix_sp(list *l, Produce *sp)
{
    scan_sp(sp);
    Tnode *k;
    Tnode *p;
    k=l->first;
    while (k!=NULL &&strcmp(k->data.name,sp->name)!=0)
    {
        p=k;
        k=k->next;
    }
    if (k==NULL)
    {
        printf("Khong the sua thong tin san pham: X");
    }
    else
    {
        if(sp->amount==1)
        {
            k->data.amount=sp->value;
        }
        else if(sp->amount==2)
        {
            k->data.value=sp->value;
        }
        printf("%s%10d%10d\n",k->data.name, k->data.amount, k->data.value);

    }
}

void find_sp(list *l)
{
    char ht[20];
    gets(ht);
    Tnode *k;
    Tnode *p;
    k=l->first;
    while (k!=NULL &&strcmp(k->data.name,ht)!=0)
    {
        p=k;
        k=k->next;
    }
    if (k==NULL)
    {
        printf("Khong ton tai san pham: X");
    }
    else
    {
        printf("%s%10d%10d\n",k->data.name, k->data.amount, k->data.value);
    }

}
int main()
{
    list l;
    Produce sp;
    int t,stt;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &stt);
        switch(stt)
        {
        case 1://nhap vao san pham
            scan_sp(&sp);
            break;
        case 2://xoa 1 san pham
            delete_node(&l);
            break;
case 3://tim kiem va in ra
            find_sp(&l);
            break;
        case 4://tim va sua san pham
            fix_sp(&l, &sp);
            break;
        case 5:// in ra list
            print_list(l);
            break;
        default :
            break;
        }
    }
}
