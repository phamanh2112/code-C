/*Viết chương trình thực hiện các yêu cầu sau:
Nhập vào một chuỗi ký tự và một ký tự
Yêu cầu:
a. Đếm số lần xuất hiện của ký tự đó trong chuỗi.
b. Kiểm tra tính đối xứng của chuỗi
c. Nếu chuỗi không đối xứng in lại chuỗi đảo ngược.*/

#include<stdio.h>
#include<string.h>
void nhapChuoi(char str[])
{
       printf("nhap chuoi: ");
       gets(str);
}
void xuatChuoi(str)
{
    puts(str);
}
void demSoLanXuatHien(char str[], char a[])
{
    gets(a);
    int dem=0;
    for(int i=0; i<strlen(str); i++){
        for(int j=0; j<1; j++){
             if(str[i]==a[0])
             dem++;
            }
    }
    printf("%d lan\n", dem);
}

int kiemTraDoiXung(char str[])
{
    for (int i = 0; i <= strlen(str) / 2; i++) {
        if (str[i] != str[strlen(str) - 1 - i])
            return 0;
    }
    return 1;
}
void inDaoNguoc(char str[])
{
    for(int i=strlen(str); i>=0; i--){
        printf("%c", str[i]);
    }
}
int main ()
{
    char str[100],  a[3];
    nhapChuoi(str);
    xuatChuoi(str);
    demSoLanXuatHien(str,a);
    if(kiemTraDoiXung(str) == 1)
         printf("----> doi xung ");
    else {
        printf("----> khong doi xung \n");
        inDaoNguoc(str);
    }
    return 0;

}
