#include<stdio.h>
int main()
{
    int a,b,c;
    printf("nhap a,b,c la ba canh cua tam giac");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c||b<a+c||c<a+b)
       {
       printf("ðay la tam giac\n");
       if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
        printf("day la tam giac vuong");
       if(a==b&&b==c)
       printf("day la tam giac deu");
       if(a==b&&a!=c||a==c&&c!=b||b==c&&c!=a)
        printf("day la tam giac can");
       if(a!=b&&b!=c&&c!=a)
            printf("day la tam giac thuong");
       }
    else printf("day khong la tam giac");
    return 0;
}
