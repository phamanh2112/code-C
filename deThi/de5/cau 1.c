
/* viết chuong trình nhập vào ba số a,b,c sau đó kiể tra xem ba số đó có phải tam giã hay không
nếu là tam giác thì kiểm tra xem đó là loại tam giac nào trong số tam giac sau; vuông cân đều tam giác thường*/
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("nhap a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b+c && c<b+a && b<a+c){
        printf("%d %d %d tao thanh mot tam giac\n",a,b,c);
        if(a==b && b==c){
            printf("tam giac deu\n");
            return;
        }
        if(a==b && b!=c || c==b && b!=a || a==c &&c!=b){
            printf("tam giac can");
            return;
        }
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a){
            if(a==b && b!=c || c==b && b!=a || a==c &&c!=b){
            printf("tam giac vuong can");
            return;
            }
            else
                printf("tam giac vuong");
        }
        else printf("tam giac thuong ");
    }
    else printf("khong phai tam giac");
    return 0;
}
