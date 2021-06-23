//tính=1/2+2/3+3/4+...+n/(n+1)
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
        s+=(float)i/(i+1);

    }
    printf("tong s= %f",s);
    return 0;
}

