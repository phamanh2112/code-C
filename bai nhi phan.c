/* -tao kieu du lieu matHang gom:
+ten thang
+ đon gia
+ so kuong
+thanh tỉền
menu

1.nhap du lieu cho mot mạt hang và luu vào file SO_LIEU.C
2. mo file So_LIEU.c, doc mathang va luu ra ngoai man hinh*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>

typedef struct
{
    char tenHang[30];
    float donGia;
    int soLuong;
}MatHang;

void nhapDuLieu()
{
    MatHang MH;
    printf("ten mat hang: ");
    fflush(stdin);
    gets(MH.tenHang);
    printf("don gia: ");
    scanf("%f", &MH.donGia);
    printf("so luong: ");
    scanf("%d", &MH.soLuong);

}
void menu()
{
    printf("==========Menu===========\n");
    printf("1) nhap du lieu cua mot mat hang va lui=u vao file SO_LIEU.C\n");
    printf("2)  mo file So_LIEU.c, doc mathang va luu ra ngoai man hinh\n");
    printf("-----------------------------------------------------------------\n");
    printf("lua chon: ");
}

int main ()
{
    MatHang MH;
    int chon;
    do{
        menu();
        scanf("%d", &chon);
        switch(chon)
        {
        case 1:
            printf("nhap du lieu: ");
            nhapDuLieu();
            getch();
            break;
        case 0:
            printf("nhap phim bat ki de thoat chuong trinh\n");
            getch();
            exit(0);

        }
      system("cls");
    }while(chon >=0 && chon<=2);
    return 0;

}
