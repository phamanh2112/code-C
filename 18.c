
#include<stdio.h>
#include<math.h>
int main ()
{
    int x,  n;
    int s=1;
    float t=0;
    printf("nhap x,n: ");
    scanf("%d%d",&x, &n);
    for(int i=1; i<=2*n; i+=2){
        s*=i;

        t+= (float)pow(x,i) / s;
    }
    printf("T= %f ",t-1);
    return 0;
}
