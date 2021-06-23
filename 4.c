////tinh tong s=1/2+1/4+....+1/2n

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s+=(float)1/(2*i);

    }
    printf("tong s= %f",s);
    return 0;
}
