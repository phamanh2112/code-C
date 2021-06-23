#include<stdio.h>
int main()
{
    int s,n;
    scanf("%d", &n);
    for(int i=1;i<=10;i++)
    {
        s=n*i;
        printf("%d * %d = %d\n",n,i,s);
    }
    printf("\n");
    return 0;
}
