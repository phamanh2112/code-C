#include<stdio.h>
int main()
{
    int a, b,s;
    printf("nhap hai so a,b= ");
    scanf("%d%d", &a, &b);
    if(a>=100 && a<1000 || b>=100 && b<1000){
        printf("%6d\nx%5d\n", a, b);
        s = a*b;
        printf("__________\n");
        int i = a*(b%10);
        printf("%6d\n",i);
        b=b/10;
        i = a*(b%10);
        printf("%5d\n",i);
        b=b/10;
        i = a*(b%10);
        printf("%4d\n",i);
        printf("__________\n");
        printf("%4d", s);
    }
    else {
        printf("nhap lai hai so co ba chu so");
    }

    return 0;
}
