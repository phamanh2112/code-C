#include<stdio.h>
int main()
{
    int n;
    int a[100];
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("\n phan tu max trong day la: %d", max);
    return 0;

}
