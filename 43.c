//Hãy đếm số lượng chữ số của số nguyên dương n
#include<stdio.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    int dem=0;
    for(int i=n; i>=0; i--){
        i/=10;
        dem++;

    }
    printf(" %d co %d chu so", n,dem);
    return 0;
}
