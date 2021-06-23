#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f;
    double x, y;
    printf("nhap a,b,c,d,e,f= ");
    scanf("%lf %lf %lf ",&a,&b,&c);
    scanf("%lf %lf %lf ",&d,&e,&f);
    if(a/d == b/e && b/e == c/f){
        printf("He phuong trinh vo nghiem");
    }
    else if(a/d == b/e && b/e != c/f ){
        printf("He phuong trinh co vo so nghiem");
    }
    else if(a==b && b==c && c==d && d==e && e==f && f==0){
        printf("He phuong trinh co vo so nghiem");
    }
    else{
            x=(float)(c-b*((f*a-c*d)/(e*a-b*d)))/a;
            y=(float)(f*a-c*d)/(e*a-b*d);
        printf("He phuong trinh co nghiem duy nhat\n");
        printf ("x = %.5lf\n",x);
        printf ("y = %.5lf\n",x);

    }
    return 0;

}
