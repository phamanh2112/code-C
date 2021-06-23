//Tính S(n) = 1^2 + 2^2 + 3^2 + … + n^2.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        s+=pow(i,2);
    }
    printf("tong s= %d",s);
    return 0;
}
