/*Nhập ma trận các số nguyên gồm n hàng và m cột. Sắp xếp lại các
phần tử của ma trận theo chiều tăng dần của cột và hàng. Viết lại ma trận
ban đầu và ma trận kết quả ra màn hình.*/
#include<stdio.h>
#define Max_cot 100
#define Max_dong 100
void nhapMang(int a[][Max_cot], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatMang(int a[][Max_cot], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void sapXepTanghTheoDong(int a[][Max_cot], int m, int n)
{
    for(int i = 0; i<m ; i++)
      for(int j = 0; j<n-1 ;j++)
      for(int k = n-1;k>j ; k--){
         if(a[i][k]<a[i][k-1])
         {
           int temp = a[i][k];
           a[i][k] = a[i][k-1];
           a[i][k-1] = temp;

         }
      }
}
void sapXepTangTheoCot(int a[][Max_cot], int m, int n)
{
   for(int j = 0; j<n ; j++)
      for(int i = 0; i<m-1 ; i++)
      for(int k = m-1; k>i ; k--)
      if(a[k][j]<a[k-1][j])
      {
    int temp = a[k][j];
    a[k][j] = a[k-1][j];
    a[k-1][j] = temp;
      }

}
int main ()
{
    int a[Max_dong][Max_cot];
    int m,n;
    printf("nhap so dong cot= ");
    scanf("%d%d",&m,&n);
    nhapMang(a,m,n);
    printf("ma tran ban dau la:\n");
    xuatMang(a,m,n);
    printf("ma tran sap xep tang theo dong la:\n");
    sapXepTanghTheoDong(a,m,n);
    xuatMang(a,m,n);
    printf("ma tran sap xep tang theo cotla:\n");
    sapXepTangTheoCot(a,m,n);
    xuatMang(a,m,n);
    return 0;
}
