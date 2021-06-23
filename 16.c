
#include<stdio.h>
#include<math.h>
int main ()
{
    int x,  n;
    int s=0;
    float t=0;
    printf("nhap x,n: ");
    scanf("%d%d",&x, &n);
    for(int i=1; i<=n; i++){
        s+=i;
        t+= (float)pow(x,i) / s;
    }
    printf("T= %f ",t);
    return 0;
}
