
////tinh tong s=1/3+1/5+....+1/(2n+1)

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s+=(float)1/(2*i+1);
        i++;
    }
    printf("tong s= %f",s);
    return 0;
}
