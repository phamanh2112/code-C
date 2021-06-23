//Viết chương trình nhập vào hai số thực. Kiểm tra xem chúng có cùngdấu hay không.
#include<stdio.h>
int main()
{
    float a,b;
    printf("nhap a,b= ");
    scanf("%f%f",&a,&b);
    if(a>0&&b>0||a<0&&b<0)
        printf("%f, %f cung dau\n",a,b);
    else printf("%f, %f khac dau",a,b);
    return 0;
}
