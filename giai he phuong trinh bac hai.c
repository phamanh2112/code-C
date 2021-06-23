#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    float x,y;
    printf("nhap: ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a/d == b/e && b/e != c/f){
        printf("vo nghiem"); }
    else if(a/d == b/e && a/d == c/f ){
        printf("vo so nghiem");}
    else if(a==b && b==c && c==e && e==d || d==f){
        printf("vo so nghiem");}
    else{

        x=(float)(c-b*((f*a-c*d)/(e*a-b*d)))/a;
            y=(float)(f*a-c*d)/(e*a-b*d);
        printf(" nghiem phuong trinh la: x= %f, y= %f ",x,y);
    }
    return 0;

}
