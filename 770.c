
//Viết hàm hoán vị 2 số nguyên bằng cách sử dụng kỹ thuật con tra
#include<stdio.h>
int main ()
{
    int a;
    int b;
    printf("nhap a,b: ");
    scanf("%d%d", &a,&b);
    printf("ban dau a=%d , b=%d\n",a,b);
    int* p_a=&a;
    int* p_b=&b;
    int tmp=*p_a;
    *p_a=*p_b;
    *p_b=tmp;
    printf("sau khi bien doi: a=%d, b=%d",*p_a, *p_b);
    return 0;

}
