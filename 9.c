//tinh s=1*2*...*n
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int s=1;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s*=i;

    }
    printf("tong s= %d",s);
    return 0;
}

