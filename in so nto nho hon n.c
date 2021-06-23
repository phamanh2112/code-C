
#include<stdio.h>
#include<math.h>
int kiemtrasonguyen(int n)
{
    if (n<2) return 0;
    if (n==2) return 1;
    if (n>2) {
        for (int i=2; i<=sqrt (n); i++)
            if (n%i==0) return 0;
    }
    return 1;
}

void insongto(int n)
{
    for(int i=1;i<n;i++)
        if(kiemtrasonguyen(i)==1)
        printf("%d\n",i);

}

int main ()
{
    int n,i;
    printf("nhap n");
    scanf("%d",&n);
    printf("day cac so nguyen to nho hon %d la: ",n);
  insongto(n);


    return 0;
}
