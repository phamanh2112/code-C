/* viet chuong trinh nhap vao hai so nguyen theo chieu tang dan sau do
 ghep cac phan tu cua hai day nay de tao thanh day thu ba van theo chieu tang dan ma
khong can sap xep lai. in ra man hinh day nay*/


#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int nhap(int a[], int n)
{
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    return n;
}

void hienTHi(int a[], int n)
{
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int ghepMang(int a1[], int a2[], int a3[], int n1, int n2)
{
    int i, j ,k;
    i = j = k = 0;
    while(1){
        if(a1[i] < a2[j]){
            a3[k] = a1[i];
            k++;
            i++;
        }
        else{
            a3[k] = a2[j];
            k++;
            j++;
        }
        if(i>=n1 || j>=n2)
            break;
    }
    if(i>=n1){
        while(j<n2){
            a3[k] = a2[j];
            k++;
            j++;
        }
    }
     if(j>=n2){
        while(i<n1){
            a3[k] = a1[i];
            k++;
            i++;
        }
     }
     return k;
}
void menu()
{
    printf("1. nhap 2 mang tang dan\n");
    printf("2. ghep hai mang\n");
    printf("3. int  3 mang\n");
    printf("0. thoat\n");
    printf("lua chon: ");
}

int main ()
{
    int a1[100], a2[100], a3[100];
    int n1, n2, n3;
    int c;
    do{
        menu();
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            printf("nhap mang thu 1\n");
            n1= nhap(a1, n1);
            printf("nhap mang 2\n");
            n2=nhap(a2, n2);
            printf("nhap thanh cong\n");
            getch();
            system("cls");
            break;
        case 2:
            n3 = ghepMang(a1, a2, a3, n1, n2);
            printf("ghep thanh cong");
            getch();
            system("cls");
            break;

        case 3:
            printf("mang thu 1: ");
            hienTHi(a1, n1);
            printf("mang thu 2: ");
            hienTHi(a2, n2);
            printf("mang thu 3: ");
            hienTHi(a3, n3);
            getch();
            system("cls");
            break;
        case 0:
            exit(0);
        default:
            printf("\nchi nhap tu 0 den 3\n");
        }
    }while(c >=0 && c<=3);
    return 0;


}
