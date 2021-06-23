
/*Viết chương trình nhập một dãy số nguyên gồm n phần tử.
a. Kiểm tra xem dãy số này có đối xứng hay không. Nếu không hãy
viết lại dãy số theo thứ tự ngược lại.
b. Sắp xếp lại dãy số theo thứ tự tăng dần.*/
#include<stdio.h>
#define Max 100
void nhapMang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("a[%d]= ", i);
        scanf("%d",&a[i]);
    }
}
void xuatMang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int KiemTra(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]==a[n-i-1]){
            return 1;
        }
    }
    return 0;
}
void inDaoNguoc(int a[], int n){
    if( KiemTra(a,n)==0){
            printf("day dao nguoc la:\n");
        for(int i=n-1; i>=0;i--){
            printf("%d\t",a[i]);
        }
    }
     else
        printf("day la day so doi xung");
}
int main()
{
    int a[Max];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    inDaoNguoc(a,n);
    return 0;

}
