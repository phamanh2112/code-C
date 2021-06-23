/* -dau tien in ra cac dong chu NGON NGU LAP TRINH
-Neu khong bam phim hoac bam phim khac c,p thi dong chu tren tiep tuc hien ra
+neu bam c ti ct in ra dong chu TURBO C
+Neu bam p thi ct in ra dong chu TURBO PASCAL
-bam phim bat ki de ket thuc chuong trinh*/
#include<stdio.h>
#include<string.h>
int main()
{
    fflush(stdin);
    printf("NGON NGU LAP TRINH\n");
    char nhap;
    do{
        scanf("%c", &nhap);
        if(nhap!='c'||nhap!='p'){
            printf("NGON NGU LAP TRINH\n");
        }
          switch (nhap){
          case 'c': printf("TURBO C\n"); break;
          case 'p': printf("TURBO PASCAL\n"); break;
          }
    }while(nhap!='c'&&nhap!='p');
    return 0;
}

