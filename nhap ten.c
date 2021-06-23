// nhap ten cua ba nguoi , in ra lan luot xinchao....
#include<stdio.h>

int main()
{
    fflush(stdin);
    char str[20];
    for(int i=1; i<=3; i++)
    {
    printf(" NHAP TEN nguoi thu %d: ",i);
    fgets(str, 20, stdin);
    printf("XIN CHAO %s",str);
    }
    return 0;

}
