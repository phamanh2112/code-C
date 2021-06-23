#include<stdio.h>
int main()
{
    int a=255, b=187;
    float f=3.14;
    int *ptr = &a;
    float *fptr;
    fptr= &f;
   // printf("dia chi cua bien a: %x",&a);
    //printf("\ngia tri chua trong ptr: %x", ptr);
    printf("\n gia tr cua a: %d", *ptr);
    ptr= &b;
    printf("gia tri cua bien b:%d",*ptr);

    return 0;
}
