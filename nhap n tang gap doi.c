#include<stdio.h>
int main ()
{
    int n;
    int* p=&n;
    scanf("%d",p);
    *p *=2;
    printf("%d",*p);
    return 0;
}
