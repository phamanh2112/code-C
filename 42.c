/*Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao
cho S(k) < n. Trong đó chuỗi S(k) được định nghĩa như sau : S(k) = 1 +
2 + 3 + … + k*/
#include <stdio.h>
 #include <conio.h>
 // Hàm chính.
  void main()
{
    int S = 1, i = 2, n;
    do{
        printf("\n Nhap n = ");
        scanf("%d", &n);
        if(n < 0){
            printf("\n Xin vui long nhap n >= 0...");
          }
    }while(n < 0);
    while(S + i < n){
        i++;
        S = S + i;
    }
    printf("\n Ket qua: %d", i);
    getch();
}
