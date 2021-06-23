//t=x^2+x^4+...+x^2n
#include<stdio.h>
#include<math.h>
int main ()
{
    int x,  n;
    int t=0;
    printf("nhap x,n: ");
    scanf("%d%d",&x, &n);
    for(int i=1; i<=n; i++){
     t+= pow(x,2*i);
    }
    printf("T= %d",t);
    return 0;
}
