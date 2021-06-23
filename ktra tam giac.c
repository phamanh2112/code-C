#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("nhap a,b,c= ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && c<a+b && b<a+c){
       printf("la tam giac\n");
       if(a==b && b==c)
        printf("la tam giac deu");
       else if(a==b && b!=c )
        printf("la tam giac can ");
       else if(a*a == b*b+c*c || c*c == b*b+a*a || b*b == a*a+c*c){
            if(a==b && b==c )
                printf("la tam giac vuong can");
            else printf("la tam giac vuong");
       }
       else printf("la tam giac thuong");
    }
    else printf("k phai tam giac");
    return 0;
}
