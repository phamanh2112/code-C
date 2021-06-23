/*Viết chương trình thực hiện các yêu cầu sau:

Nhập vào một xâu ký tự. Đếm xem trong xâu vừa nhập có bao nhiêu chữ
cái, bao nhiêu chữ số và bao nhiêu ký tự khác. In kết quả ra màn hình.
VD: 65DCht2130@#45 34.’%^*/
#include<stdio.h>
#include<string.h>

void demChu(char str[])
{
    int dem=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            dem++;
    }
    printf("%d chu \n",dem);
}
void demSo(char str[])
{
    int dem=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9' )
            dem++;
    }
    printf("%d so\n",dem);
}
void demKiTuKhac(char str[])
{
    int dem=0;
    for(int i=0; i<strlen(str); i++){
       if(str[i] >= 32 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >=91 && str[i] <= 95 || str[i] >=124 && str[i] <= 127 )
        dem++;
    }
     printf("%d ki tu dac biet\n",dem);
}
int main()
{
    char str[100];
    gets(str);
    demChu(str);
    demSo(str);
    demKiTuKhac(str);
    return 0;
}
