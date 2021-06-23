
#include<stdio.h>
int main()
{
    int n;
    int dem=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0)
           dem++;
    }
     printf("%d co %d uoc",n,dem);
    return 0;
}//Đếm số lượng “ước số” của số nguyên dương n.
