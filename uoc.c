#include<stdio.h>
int main ()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("cac uoc cua %d la: ",n);
    for(int i=1; i<n; i++){
        if(n%i==0)
            printf("%d\t",i);
    }
    return 0;
}
