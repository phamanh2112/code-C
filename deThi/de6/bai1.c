/* nhap vao mot day n so bat ki tu ban phim sau do sap xep day so theo chieu tang dan
in ra man hinh day so ban dau va day so da sap xep*/
#include<stdio.h>
void daySo(int a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nma tran vua nhap la\n");
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}
void sapXep(int a[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }

}
int main ()
{
    int a[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);

    daySo(a, n);
    printf("\nma tran sap xep lai la\n");
    sapXep(a,n);
    return 0;
}
