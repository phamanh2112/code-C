#include<stdio.h>
 struct SV
 {
     int age;
     char name[20];
     char addr[20];
 }s, s1;
 void nhap ()
 {
     printf("\n nhap thong tin cho sv:\n ");
     printf("\nnhap ten, tuoi: ");
     scanf("%s%d", &s.name, &s.age);
     printf("\nnhap dia chi: ");
     fflush(stdin);
     gets(s.addr);

 }
 void ghi(FILE *f){
     fprintf(f, "%s\n\%d\n", s.name, s.age);
     fputs(s.addr, f);
 }

 int main()
 {
     FILE *f = fopen("F:\\test.txt", "w");
     nhap();
     ghi(f);
     printf("tao thanh cong");
     fclose(f);
     return 0;
 }

