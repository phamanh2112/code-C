/*Viết chương trình đảo ngược thứ tự các từ có trong chuỗi
Ví dụ: Nhập: lap trinh bang ngon ngu c
Xuất ra màn hình là: c ngu ngon bang trinh lap*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fflush(stdin);
    printf("nhap chuoi: ");
    fgets(str, 100, stdin);
    for(int i=strlen(str); i>=0; i--){
            printf("%c", str[i]);
    }
    return 0;
}
