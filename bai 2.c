/*Viết chương trình nhập vào một ký tự. Kiểm tra xem ký tự đó là chữ cái,
chữ số hay các ký tự khác*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("nhap kis tu: ");
    fflush(stdin);
    fgets(str, 10, stdin);
    for(int i=0; i<10; i++){
        if(str[0]>='0'&&str[0]<='9'){
            printf("day la chu so ");
            return;}
        else if(((str[0]>='a')&& (str[0]<='z')) || ((str[0]>='A')&&(str[0]<'Z')))
            {
            printf("day la chu cai");
            return;}

    }
    printf("ki tu khac");
    return 0;
}

