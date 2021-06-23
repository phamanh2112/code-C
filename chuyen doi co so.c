#include<stdio.h>
#include<conio.h>
#include<windows.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *top = NULL;

node* taoNode(int n)
{
    node *p=(node*)malloc(sizeof(node));
    p->data = n;
    p->next = NULL;
}

void push(int n)
{
    node *p = taoNode(n);
    if(top == NULL){
        top = p;
    }
    else{
        p->next = top;
        top = p;
    }
}

int pop()
{
    if(top == NULL)
        return -1;
    else{
       int n = top->data;
       node *p = top;
       top = top->next;
       free(p);
       return n;
    }
}

void chuyenCoSo(int he10, int coSo)
{
    while(he10>0){
        push(he10%coSo);
        he10/=coSo;
    }
}

void hienThi()
{
    while(top!=0){
        printf("%d", pop());
    }
    printf("\n");
}

void menu()
{
    printf("1. sang he co so 2\n");
    printf("2. sang he co so 8\n");
    printf("3. sang he co so 16\n");
    printf("0. thoat\n");
    printf("lua chon: ");
}

int main ()
{
    int c;
    int n;
    while(1){
        menu();
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            printf("nhap he co so 10: ");
            scanf("%d", &n);
            chuyenCoSo(n, 2);
            printf("chuyen sang he 2: ");
            hienThi();
            getch();
            system("cls");
            break;
        case 2:
            printf("nhap he co so 10: ");
            scanf("%d", &n);
            chuyenCoSo(n, 8);
            printf("chuyen sang he 8: ");
            hienThi();
            getch();
            system("cls");
            break;
        case 3:
            printf("nhap he co so 10: ");
            scanf("%d", &n);
            chuyenCoSo(n, 16);
            printf("chuyen sang he 16: ");
            printf("%x\n",n);
            getch();
            system("cls");
            break;
        case 0:
            exit(0);
        default:
            printf("moi chon lai");
            getch();
            system("cls");
            break;
        }
    }
}
