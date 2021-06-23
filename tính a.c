#include<stdio.h>

int main()
{
    int x,n;
    float s=10;
    printf("nhap x,n=\n");
    scanf("%d%d",&x,&n);
    for(int i=1; i<=n; i++) {
        if(i%2==0)
            s+=(float)-x/(i*10);
        else
            s+=(float)x/(i*10);
    }
    printf("A=%f\n",s);


    return 0;
}
