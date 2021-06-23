#include"stdio.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node
{
    int so_du;
    struct node *tiep;

}Node;


typedef struct
{
    Node *top;
}stack;



void khoitaostack(stack *s)
{
    s-> top=NULL;
}


Node*taonode(int *n)
{
    Node *p;
    p = (Node*)malloc(sizeof(Node));
    if (p==NULL)
    {
        printf("\n khong du bo nho de cap nhap: ");
        return NULL;
    }
    p->so_du= *n;
    p->tiep=NULL;
    return p;
}



bool isempty(stack s)
{
    if(s.top==NULL)
        return false;
    else
        return true;

}


bool push(stack *s, Node *p)
{
    if (p==NULL)
        return false ;
    if(isempty(*s)==false)
    {
        s->top=p;

    }
    else
    {
        p-> tiep=s->top;
        s->top=p;

    }
    return true;
}


bool pop(stack *s, int *m)
{
    if(isempty(*s)==false)
        return NULL;
    Node *p;
    p=s->top;

    s->top=s->top->tiep;
    *m=p->so_du;
    return true;
}



void chuyen_co_so(stack *s, int so, int co_so)
{
    while(so!=0)
    {
        int du=so%co_so;
        Node *p=taonode(&du);
        push(s,p);
        so=so/co_so;
    }
}



void xuatstack(stack s)
{
    while (isempty(s)==true)
    {
        int x;
        pop(&s,&x);
        if(x<10)
            printf("&d",x);
        else
            printf("%c",x+55);

    }
}



main()
{
    stack s;
    khoitaostack(&s);
    int n,a;
    printf("nhap co so can chuyen: ");
    scanf("%d",&n);
    printf("nhap co so: ");
     scanf("%d",&a);
     chuyen_co_so(&s,n,a);
     printf("\n xuat ra ket qua: ");
     xuatstack(s);
}
