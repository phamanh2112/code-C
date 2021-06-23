
// t=1+1/1+2+...+1/(1+2+..+n)
#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   printf("nhap n= ");
   scanf("%d",&n);
   int s=0;
   float t;
   for(int i=1; i<=n; i++){
    s+=i;
     t+=(float) 1 / s;
   }
   printf("T= %f",t);
   return 0;
}
