#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long a,b,q;
    long long r,d,x,y,x1,y1,x2,y2;
    printf("nhap a: ");
    scanf("%I64u",&a);
    printf("nhap b: ");
    scanf("%I64u",&b);


    x2=1;
    y2=0;
    x1=0;
    y1=1;
    if(b==0)
    {
        d=a;
        x=x2;
        y=y2;
        printf("\n(%I64ld,%I64ld,%I64ld)",d,x,y);
    }
    else
    {


        q=a/b;
        r=a-q*b;
        x=x2-q*x1;
        y=y2-q*y1;
        //printf("\nq:%I64u\t,r:%lld\t,x:%lld\t,y:%lld\t,a:%I64u\t,b:%I64u\t,x2:%lld\t,x1:%lld\t,y2:%lld\t,y1:%lld",q,r,x,y,a,b,x2,x1,y2,y1);

        while(1)
        {
            a=b;
            b=r;
            x2=x1;
            x1=x;
            y2=y1;
            y1=y;
            if(b==0)
            {
                d=a;
                x=x2;
                y=y2;
                break;
            }
            q=a/b;
            //printf("\nq:%I64u\t,r:%lld\t,x:%lld\t,y:%lld\t,a:%I64u\t,b:%I64u\t,x2:%lld\t,x1:%lld\t,y2:%lld\t,y1:%lld",q,r,x,y,a,b,x2,x1,y2,y1);
            r=a-q*b;
            x=x2-q*x1;
            y=y2-q*y1;

        }
        printf("\n(%I64ld,%I64ld,%I64ld)",d,x,y);
    }
}