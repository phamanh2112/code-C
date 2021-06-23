#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,x1,x2;
    printf("nhap he so: ");
    scanf("%f%f%f", &a, &b, &c);
    if(a==0){
        if(b==0){
            if(c==0){
                printf("pt co vo so nghiem");
            }
            else {
                printf("pt vo nghiem");
            }
        }
        else {
                x1= (float) -c/b;
            printf("pt co nghiem duy nhat: %.2f", x1);
        }
    }
    else{
        float denta = b*b- 4*a*c;
        if(denta < 0){
            printf("pt vo nghiem");
        }
        else if(denta == 0){
            x1=(float) -b/(2*a);
            printf(" pt co nghiem kep x1= x2= %.2f", x1);
        }
        else{
            x1 = (float) (-b + sqrt(denta))/ (2*a);
            x2 = (float) (-b - sqrt(denta))/ (2*a);
            printf("pt co hai nghiem phan biet: x1 = %.2f, x2= %.2f",x1,x2);
        }
    }
    return 0;

}
