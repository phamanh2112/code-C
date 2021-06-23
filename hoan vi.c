#include<stdio.h>
void hoanVi(int *p1, int *p2)
{
    int p =*p1;
    *p1 = *p2;
    *p2 = p;
}
int main ()
{
    int p1, p2;
    printf("nhap so thu nhat: ");
    scanf("%d", &p1);
    printf(" nhap so thu hai: ");
    scanf("%d", &p2);
    hoanVi(&p1, &p2);
    printf("sau khi doi la \n");
    printf("so thu nhat %d\n",p1);
    printf("so thu hai %d",p2);
    return 0;
}
