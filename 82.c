//Viết chương trình tìm số lớn nhất trong ba số thực a, b, c.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("nhap a,b,c= ");
    scanf("%f%f%f",&a,&b,&c);
    float max=a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    printf("max= %f",max);
    return 0;
}
