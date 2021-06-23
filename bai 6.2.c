/*Viết chương trình thực hiện các yêu cầu sau:

Nhập vào một xâu ký tự, đếm số từ trong xâu. In ra màn hình từ có độ
dài lớn nhất.
VD: Cong hoa xa hoi chu nghia Viet Nam
Xau co 8 tu
Tu dai nhat: nghia*/

#include<stdio.h>
#include<stdio.h>
void demSoTu(char str[], int* pDem)
{
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' '&&str[i+1]!=' '){
            dem++;
        }
    }
    printf("xau co %d tu", dem);
}
void timPhanTuDaiNhat(char str[], int* pDem)
{
    int tu=0
    for(int i=0; i<strlen(str), i++){

    }

}
int main ()
{
    char str[100];
    gets(str);
    demSoTu(str);
    return 0;
}
