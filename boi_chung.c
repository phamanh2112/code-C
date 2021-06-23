#include <stdio.h>
#include <stdlib.h>

int uoc(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int t;
    int x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        int c = (x/uoc(x,y))*y;
        printf("LCM(%5d, %5d) = %5d\n", x,y,c);
    }
    return 0;
}
