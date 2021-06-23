#include<stdio.h>
int main()
{
    int a=1,b=4;
    int *t1, *t2, t;
    //printf("nhap a,b= ");
   // scanf("%d%d",a,b);
    t1 = &a;
    t2 =&b;
    t= *t1 + *t2;
    printf("tong cua 2 so la %d",t);
    return 0;
}
