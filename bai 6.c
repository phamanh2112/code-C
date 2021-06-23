/*Viết chương trình thực hiện các yêu cầu sau:
Nhập vào một chuỗi ký tự
Yêu cầu:
a. Chuyển chuỗi thành chữ in hoa

b. cho biết chiều dài của chuổi
c. Nhập vào một kí tự. đếm số lần xuất hiện kí tự đó trong xâu
d. Đếm số ký tự dấu cách xuất hiện trong xâu
e. Kiểm tra tính đối xứng của chuỗi
f. Nếu chuỗi không đối xứng in lại chuỗi đảo ngược.
g. Viết chương trình nhập vào một ký tự. Kiểm tra xem ký tự đó là chữ cái,
chữ số hay các ký tự khác
h. chuyển các kí tự đầu của chuỗi in hoa*/
#include<stdio.h>
#include<string.h>

void nhapChuoi(char str[])
{
    fflush(stdin);
    printf("nhap chuoi: ");
    gets(str);
}
void xuatChuoi(char str[])
{
    puts(str);
}
void chuyenChuoiThanhChuCaiInHoa(char str[])
{
   char *s= strupr(str);
   printf("chuoi in hoa la: ");
   puts(s);
}
void demSoLanXuatHien(char str[])
{
    char a[2];
    printf("nhap ki tu can kiem tra: ");
    gets(a);
    int c=a[0];
    int dem=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==a[0])
            dem++;
    }
    printf("tan xuat xuat hien cua %c trong chuoi la %d\n",a[0], dem);

}
void chieuDai(char str[])
{
    int c=strlen(str);
    printf("chieu dai cua chuoi la %d\n",c);
}
void demKiTuDauCach(char str[])
{
    int dem=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' ')
            dem++;
    }
    printf("so ki tu dau cach la %d\n", dem);
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
    printf("chuoi dao nguoc la: ");
    if(kiemTraDoiXung(str)==0)
    for (int i = strlen(str); i >=0  ; i--){
        printf("%c",str[i]);
    }


}
int main()
{
    char str[100];
    nhapChuoi(str);
    xuatChuoi(str);
    chuyenChuoiThanhChuCaiInHoa(str);
    demSoLanXuatHien(str);
    chieuDai(str);
    demKiTuDauCach(str);
    if (kiemTraDoiXung(str) == 1)
            printf("la day  doi xung\n");
    else{
            printf(" Khong la day  doi xung\n");
            inDaoNguoc(str);
    }
    return 0;

}

