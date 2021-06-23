// nhap a, b,c la ba canh cua tam giac. tinhs dien tich chu vi tam giac
#include<stdio.h>
#include<math.h>
void dienTich(int a, int b, int c)
{
    float p=(a+b+c) / 2;
    float dt= sqrt(p*(p-a)*(p-b)*(p-c));
    printf(" dien tich la %f ", dt);
}

int main()
{
    int a,b,c;
    float p=(float) (a+b+c)/2;
    printf("nhap ba canh cua tam giac: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b+c && b<a+c && c<b+a){
        int cv=a+b+c;
        dienTich(a,b,c);
        printf(" chu vi tam giac la %d", cv);
    }

    else{
        printf("%d %d %d khong la ba canh cua tam giac nhap lai!!!",a,b,c);
    }
        return 0;


}
