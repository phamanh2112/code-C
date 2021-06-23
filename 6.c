
////tinh tong s=1/(1*2)+1/(3*3)+....+1/(n*(n+1))

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
        s+=(float)1/(i*(i+1));

    }
    printf("tong s= %f",s);
    return 0;
}
