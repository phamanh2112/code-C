
#include<stdio.h>
void nhapDayn(float a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%f", &a[i]);
    }
}

void hienThiDay(float a[], int n)
{
    for(int i=0; i<n;i++){
        printf("%f\t", a[i]);
    }
}
void Max(float a[], int n)
{
    float max= a[0];
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("\nMAX= %f\n", max);
}
void Min(float a[], int n)
{
    float min= a[0];
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("MIN= %f\n", min);
}

int main ()
{
    float a[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    nhapDayn(a,n);
    hienThiDay(a,n);
    Max(a,n);
    Min(a,n);
    return 0;

}
