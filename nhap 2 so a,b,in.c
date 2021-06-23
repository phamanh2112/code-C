#include<stdio.h>
int main ()
{
    int a, b;
    int* p1=&a;
    int* p2=&b;
    scanf("%d", p1);
    printf("a= %d\n", *p1);
    scanf("%d", p2);
    printf("b= %d", *p2);
    return 0;
}
