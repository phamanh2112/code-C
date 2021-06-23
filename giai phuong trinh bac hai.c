#include<stdio.h>
#include<math.h>
void soNghiem(float a, float b, float c, float x1, float x2)
{
    float p=b*b-4*a*c;//denta
    if(a==0){
        if(b==0){
            if(c==0){
                printf("vo so nghiem");
                return;
            }
            else {printf("vo nghiem"); return;}
        }
        else{
            x1=x2=(float)-c/b;
            printf("phuong trinh co mot nghiem: %f",x1);
            return;
        }
    }
    else {
        if(p<0){
            printf("vo nghiem"); return;}
        else if(p==0){
            x1=(float)-b/2*a;
            printf("nghiem kep: %f", x1);
            return;
        }
        else{
            x1=(float)(-b+sqrt(p)) / (2*a);
            x2=(float)(-b-sqrt(p)) / (2*a);
            printf("2 nghiem phan biet: %f   %f", x1, x2);
            return;
        }
    }
}
int main ()
{
    float a,b,c;
    float x1,x2;
    printf(" nhap a,b,c= ");
    scanf("%f%f%f",&a,&b,&c);
    soNghiem(a,b,c,x1,x2);
    return 0;
}
