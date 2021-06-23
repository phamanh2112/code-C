
//Tính S(n) = 𝑥 + 𝑥^3 + 𝑥^5 … + 𝑥^(2𝑛+1).
#include<stdio.h>
#include<math.h>
int main()
{
    int x, n;
    int t=0;
    printf("nhap x,n: ");
    scanf("%d%d",&x, &n);
    for(int i=1; i<=n; i++){
        t+=pow(x,(2*i+1));
    }
    printf("T= %d",t);
    return 0;
}
