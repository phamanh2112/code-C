#include<stdio.h>
int kiemTra(int a, int b, int c)
{
    if(a<b+c&&b<a+c&&c<a+b)
        return 1;
    else
        return 0;
}
void laTamGiac(int a, int b, int c)
{
    if(kiemTra(a,b,c)){
       printf("%d %d %d la ba canh cua tam giac\n",a,b,c);
       if(a==b&&b==c){
        printf("day la tam giac deu\n");
        return;
       }
       if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (c*c+b*b==b*b)){
            if(a==b&&b!=c||a==c&&c!=b||c==b&&b!=a){
                printf("day la tam  giac vuong can");
                return;
       }
            else
                printf("la tam giac vuong");
        return;
       }
       if(a==b&&b!=c||a==c&&c!=b||c==b&&b!=a){
        printf("day la tam gia can");
        return;
       }
       else printf("day la tam giac thuong");

    }
    else printf("%d %d %d khong phai ba canh cua tam giac",a,b,c);
}
int main()
{
    int a,b,c;
    printf("nhap a,b,c= ");
    scanf("%d%d%d",&a,&b,&c);
    laTamGiac(a,b,c);
    return 0;

}
