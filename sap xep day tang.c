#include<stdio.h>
void sapXepTang(int a[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
}
int main ()
{
    int a[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("day sap xep tang la: \n");
    sapXepTang(a,n);
    return 0;
}
