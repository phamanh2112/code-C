#include<stdio.h>
#include<stdio.h>
int main()
{
    int n;
    int dem=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            if(i%2==0){
              dem++;
            }
        }
    }
     printf("%d co so uoc chan la %d ",n,dem);
    return 0;

}
//Đếm số lượng “ướ c số chẵn” của số nguyên dương n
