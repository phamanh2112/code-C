/*Viết chương trình thực hiện các yêu cầu sau:

Nhập xâu ký tự họ và tên. Hãy chuẩn hóa xâu đó và in kết quả ra màn
hình.
(Các ký tự đầu viết hoa, các ký tự sau viết thường, giữa các từ có 1 ký tự
trắng, không có ký trắng ở đầu hoặc cuối xâu).*/
#include<stdio.h>
#include<string.h>
void nhapHoTen(char str[])
{
    gets(str);
}
void chuanHoa(char str[])
{
    if(str[0]!=' '){
        str[0]=str[0]-32;
        for(int i=0; i<strlen(str); i++){
                if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] >= 'a' && str[i+1] <= 'z')
                   str[i+1]= str[i+1]-32;
            }
        }
    else{
        for(int i=0; i<strlen(str); i++){
                if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] >= 'a' && str[i+1] <= 'z')
                   str[i+1]= str[i+1]-32;
        }
    }

    printf("%s", str);
}
int main()
{
    char str[100];
    nhapHoTen(str);
    chuanHoa(str);
    return 0;
}
