// nhap mot chuoi ki tu kiem tra xem chuoi do co ton  tai chu so hay k in ra co hoac khong
#include<stdio.h>
int main()
{
    int str[30];
    fflush(stdin);
    printf("nhap chuoi ki tu: ");
    fgets(str, 30, stdin);
    for(int j=0; str[j]='\0'; j++)
        for(int i=0; i<=j; i++)
    {
        if(str[i]>='0'&&str[i]<=9)
        printf("co");
        else printf("khong");
    }
    return 0;
}
