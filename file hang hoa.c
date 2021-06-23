#include<stdio.h>
#include<conio.h>
#include<windows.h>

typedef struct
{
    char tenHang[20];
    int donGia;
    int soluong;

}MatHang;

void writeFile()
{
    FILE *f;
    f= fopen("SO_LIEU.C", "wb");
    int n;
    MatHang hang;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("mat hang thu: %d\n",i+1);
        printf("Ten Hang: ");
        fflush(stdin);
        gets(hang.tenHang);
        printf("Don Gia: ");
        scanf("%d", &hang.donGia);
         printf("So Luong: ");
        scanf("%d", &hang.soluong);
        fwrite(&hang, sizeof(MatHang), 1,f);
    }
    fclose(f);
}

void readFile()
{
    FILE *f;
    f = fopen("SO_LIEU.C", "rb");
    MatHang hang;
    printf("%5s | %20s | %10s | %10s | %15s\n", "STT", "Ten Hang", "Don Gia", "So Luong", "Thanh tien");
    fread(&hang, sizeof(MatHang), 1,f);
    while(!feof(f)){
        int i;
        printf("%5d | %20s | %10d | %10d | %15d\n", ++i, hang.tenHang, hang.donGia, hang.soluong, hang.donGia *hang.soluong);
        fread(&hang, sizeof(MatHang), 1,f);
    }

    fclose(f);
}
void menu()
{
    printf("-------------MENU-------------\n");
    printf("1. nhap\n");
    printf("2. doc in ra man hinh\n");
    printf("0. thoat\n");
    printf("lua chon: ");
}
 int main ()
{
    int c;
    while(1){
        menu();
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            writeFile();
            getch();
            system("cls");
            break;
        case 2:
            readFile();
            getch();
            system("cls");
            break;
        case 0:
            exit(0);
        default:
            printf("chi nhap tu 0 den 2");
            getch();
            system("cls");
        }
    }
    return 0;
}
