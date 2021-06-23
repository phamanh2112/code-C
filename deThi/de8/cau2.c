/* viet chuong trinh su dung kieu nhap xuat nhi phan voi tep co ten B_DIEM.C
de ghi danh sach cac sinh vien co cau truc gom cac thanh phan : Ho_ten; Que, Diem_TB. sau do hien noi dung tep len man hinh theo dang
               Bang Diem
STT        Ho Ten        Que          Diem TB
....       .......
Tiep theo sua Diem_ TB cho nguoi nao do, roi hien lai danh sach theo dang tren*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
 typedef struct
 {
     char Ho_ten[30];
     char Que[20];
     float DiemTB;

 }SV;

 void writeFIle()
 {
     FILE *f;
     f= fopen("B_DIEM.C", "wb");
     int n;
     SV sv;
     printf("nhap so luong sinh vien: ");
     scanf("%d", &n);
     for(int i=0; i<n; i++){
        printf("nhap sv thu %d\n", i+1);
        printf("Ho Ten: ");
        fflush(stdin);
        gets(sv.Ho_ten);
        printf("Que: ");
        fflush(stdin);
        gets(sv.Que);
        printf("Diem TB: ");
        scanf("%f", &sv.DiemTB);
        fwrite(&sv, sizeof(SV), 1, f);
     }
     fclose(f);
 }
 void readFile()
 {
     FILE *f;
     f=fopen("B_DIEM.C", "rb");
     SV sv;
     printf("%5s | %20s | %20s | %7s\n", "STT", "Ho Ten", "Que", "Diem TB");
     fread(&sv, sizeof(SV), 1, f);
     while(!feof(f)){
            int i;
        printf("%5d | %20s | %20s | %7.1f\n", ++i, sv.Ho_ten, sv.Que, sv.DiemTB);
        fread(&sv, sizeof(SV), 1, f);
     }
     fclose(f);
 }
 int main ()
 {
     int c;
     do
     {
         printf("1. nhap danh sach sinh vien vao file\n");
         printf("2. doc  sinh vien ra man hinh\n ");
         printf("3. sua diem sinh vien\n");
         printf("0 thoat\n");
         printf("lua chon: ");
         scanf("%d", &c);
         switch(c){
         case 1:
            writeFIle();
            getch();
            system("cls");
            break;
         case 2:
            readFile();
            getch();
            system("cls");
            break;
         case 3:
             getch();
             system("cls");
             break;
         case 0:
            exit(0);
         default:
            printf("chi nhap tu 1 den 3");
         }
     }while(c>=0 && c<4);
     return 0;
 }



