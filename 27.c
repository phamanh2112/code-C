//Đếm số lượng “ướ c số chẵn” của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n;
    int dem=0;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("uoc so chan cua %d la: ",n);
    for(int i=2; i<n; i+=2){
        if(n%i==0){
           dem++;
           printf("%d\t",i);
        }
    }
    printf("\n");
     printf("%d co %d uoc chan",n,dem);
    return 0;
}
