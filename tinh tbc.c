#include<stdio.h>
void nhapDaySO(int a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}

void tbc_Am(int a[], int n)
{
    float tbc_Am=0;
    int t=0, dem=0;
    for(int i=0; i<n; i++){
        if((a[i]) < 0){
            t+=a[i];
            dem++;}
    }

    tbc_Am =(float) t/dem;
    printf("\nTBC_am= %f",tbc_Am);
}
void tbc_Duong(int a[], int n)
{
    float tbc_Duong=0;
    int t=0, dem=0;
    for(int i=0; i<n; i++){
        if((a[i]) > 0){
            t+=a[i];
            dem++;
        }
    }
   // printf("\n%d",dem);
    tbc_Duong=(float) t/dem;
    printf("TBC_duong= %f",tbc_Duong);
}


int main ()
{
    int  a[100];
    int n;
    float tbc_duong, tbc_am;
    printf("nhap so luong phan tu: ");
    scanf("%d",&n);
    nhapDaySO(a,n);
    tbc_Duong(a,n);
    tbc_Am(a,n);
    return 0;

}
