/*nhập vao một dãy n số bất kì từ bàn phím .
 tìm giá trị nhỏ nhất là lớn nhất của dãy số đó.
in kết quả tìm đuọc ra màn hình cùng vị trí của các giá trin mã và min*/
#include<stdio.h>
void daySo(int a[], int n)
{
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }

}

void Max(int a[], int n)
{

    int max=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
             max = a[i] ;
        }
    }
    printf("MAX= %d\n", max);
}
void Min(int a[], int n)
{

    int min=a[0];
    for(int i=1; i<n; i++){
        if(a[i]<min){
             min = a[i] ;
        }
    }
    printf("MIN= %d", min);
}
int main()
{
    int a[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    daySo(a, n);
    Max(a,n);
    Min(a,n);
    return 0;


}
