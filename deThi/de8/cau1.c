//giai he phuong trinh bac nhat
#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f;
    float x,y;
    printf("nhap a,b,c,d,e,f= ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if(a/d == b/e && b/e == c/f){
        printf("he pt co vo so nghiem");
    }
    else if(a/d == b/e && b/e != c/f ){
        printf("he pt vo nghiem");
    }
    else if(a==b && b==c && c==d && d==e && e==f && f==0 ){
        printf("he pt vo so nghiem");
    }
    else {
        x=(float)(c-b*((f*a-c*d)/(e*a-b*d)))/a;
        y=(float)(f*a-c*d)/(e*a-b*d);
        printf("he pt co 1 nghiem la x= %f , y= %f",x,y);
    }
    return 0;
}
