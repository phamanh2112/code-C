#include<stdio.h>
#include<stdlib.h>

 typedef struct Node
 {
     int data;
     struct Node *next;
 }node;

 node *top = NULL;

int  isEmpty()
 {
     return top == NULL;
 }

 node* taoNode(int value)
 {
     node* p=(node*)malloc(sizeof(node));
     p->data = value;
     p->next = NULL;
 }

 void push(int value)
 {
     node *p=taoNode(value);
     if(isEmpty()){
        top = p;
     }
     else{
        p->next = top;
        top =p;
     }
 }

 int  xoaNode( node *p)
 {
     if(isEmpty()){
        return 0;
     }
     top = top->next;
     free(p);
     return 1;
 }
int  pop()
 {
     if(isEmpty()){
        return -1;
     }
     int value = top->data;
     xoaNode(top);
     return value;
 }

 void hienThiStack()
 {
     while(!isEmpty()){
        printf("%d", pop());
     }
 }
 int main ()
 {
     int n, tmp;
     printf("nhap so he co so 10: ");
     scanf("%d", &n);
     tmp = n;
     int heSo=2;
     while(tmp>0){
        push(tmp%heSo);
        tmp/=heSo;
     }
     printf("so chuyen doi la: ");
     hienThiStack();
     return 0;
 }


