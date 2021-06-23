// giai phuong trinh bac 2
#include<stdio.h>
#include<math.h>
int main ()
{
    float a, b, c;
    float x1, x2;
    float denta;

    printf("nhap a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    if(a==0){
        if(b==0){
            if(c==0){
                printf("pt vo so nghiem");
            }
            else {
                printf("pt vo nghiem");
            }
        }
        else {
            printf("pt co nghiem la: x= %f", (float) -c/b);
        }
    }

    else{
        denta= (b*b)-(4*a*c);
        if(denta>0){
            x1=(float)(-b+sqrt(denta))/(2*a);
            x2=(float)(-b-sqrt(denta))/(2*a);
            printf("pt co hai nghiem phan biet: x1= %f, x2= %f", x1, x2);
        }
        else if(denta<0){
            printf("pt vo nghiem");
        }
        else {
            x1= (float) -b/(2*a);
            printf("pt co nghiem kep x= %f",x1);
        }
    }
    return 0;
}
