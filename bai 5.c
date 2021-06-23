/*Dùng hàm xử lý các công việc sau:
a. Nhập vào họ và tên
b. Xóa bỏ kí tự trắng thừa ở đầu , cuối và giữa xâu
c. Chuyển các kí tự đầu thành chữ in hoa*/
#include<stdio.h>
#include<string.h>
void  nhapHoTen(char str[])
{
    printf("nhap ho va ten: ");
    fflush(stdin);
    fgets(str, 30, stdin);
}
void inHoTen(char str[])
{
    puts(str);
}
void xoaKiTuTrang(char str[])
{
     int n=strlen(str);

    for(int i=0;i<n;i++)
        if(str[i]==' '){
             for(int j=i;j<n;j++){
                 str[j]=str[j+1];
                 i--;
             }
        }

    printf("%s",str);

}
void chuyenChuCaiDauThanhInHoa(char str[])
{
   if(str[0]!=' '){
    str[0]=str[0]-32;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' '&& str[i+1]!= ' '&& str[i+1]>='a'&& str[i+1]<='z'){
            str[i+1]=str[i+1]-32;
        }
    }
   }
   else{
    for(int i=0;i<strlen(str);i++){
          if(str[i]==' ' && str[i+1]!=' ' && str[i+1]>='a' && str[i+1]<='z' )  {
            str[i+1]=str[i+1]-32;
          }
      }
   }
   printf("%s", str);

}

int main()
{
    char str[100];
    nhapHoTen(str);
    inHoTen(str);
    chuyenChuCaiDauThanhInHoa(str);
    xoaKiTuTrang(str);

    return 0;
}

