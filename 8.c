////tinh tong s=1/2+3/4+....+(2n+1)/(2n+2)

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        s+=(float)(2*i+1)/(2*i+2);

    }
    printf("tong s= %f",s);
    return 0;
}

