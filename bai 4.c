/*Nhập 1 xâu ký tự. Nếu có aa…a (k chữ a) trong xâu thì thay bằng
k chữ a (ka) với k là số chữ a.
VD: aaaaabbAAAcc =&gt; 5a2b3A2c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
      char str[30];
      fflush(stdin);
      printf("nhap chuoi: ");
      gets(str);
      char kt=str[0];
      int dem=0;
      for(int i=0; i<strlen(str); i++){
        if(str[i]==kt)
            dem++;
        else
        {
            printf("%d%c",dem,kt);
            dem=1;
            kt=str[i];
        }
      }
      printf("%d%c",dem,kt);
    return 0;
}

