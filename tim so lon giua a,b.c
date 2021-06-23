#include<stdio.h>
int main ()
{
    int a,b;
    printf("nhap a,b: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("max= %d", a);
    else if(a<b)
        printf(" max= %d",b);
    else printf("%d = %d",a,b);
        return 0;
}
