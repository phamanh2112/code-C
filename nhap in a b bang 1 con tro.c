#include<stdio.h>
int main()
{
    int a,b;
    int* p=&a;
    scanf("%d",p);
    printf("a= %d", *p);
    *p=&b;
    scanf("%d",p);
    printf("b= %d", *p);
    return 0;

}
