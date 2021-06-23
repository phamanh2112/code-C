#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Sach
{
    char tenSach[30];
    int namXB;
}sach;

typedef struct Node
{
    sach data;
    struct Node* next;
}node;

node* first=NULL;

sach nhapData()
{
    sach tmp;
    printf("ten sach: ");
    fflush(stdin);
    gets(tmp.tenSach);
    printf("nam xb: ");
    scanf("%d",&tmp.namXB);
    return tmp;
}
node* taoNode()
{
    node* pnode = (node*)malloc(sizeof(node));
    pnode->data = nhapData();
    pnode->next = NULL;
    return pnode;
}

void themPhanTuDauTien()
{
    node* pnode = taoNode();
    first = pnode;
}

void themPhanTuODau()
{
    if(first == NULL)
        themPhanTuDauTien();
    else {
        node* pnode = taoNode();
        pnode->next = first;
        first = pnode;
    }
}

void hienThi1Node(node* pnode)
{
    printf("ten sach: %s\n", pnode->data.tenSach);
    printf("nam xuat ban: %d\n", pnode->data.namXB);
}

void hienThi1NodeBang(node* pnode)
{
    printf("\n%20s %8d\n", pnode->data.tenSach, pnode->data.namXB);
}

void hienThiDS()
{
    if(first == NULL){
        printf("danh sach rong\n");
    }
    else {
            node* i;
        printf("\t danh sach sach\n");
        printf("%20s %8s", "ten sach", "nam XB");
        for( i=first; i!=NULL; i=i->next){
            hienThi1NodeBang(i);
        }
    }
}
void themNodeViTrCuoi()
{
    if(first == NULL){
        themPhanTuDauTien();
    }
    else{
        node* tim;
        for(tim = first; tim->next != NULL; tim=tim->next){
            node* pnode = taoNode();
            tim->next = pnode;
        }
    }
}
int main ()
{
    themPhanTuODau();
    themPhanTuODau();
    themPhanTuODau();
    hienThiDS();
    return 0;

}

