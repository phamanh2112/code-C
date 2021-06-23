#include<stdio.h>
int main()
{
    int n,i;
    printf ("\n nhap n=");
    scanf ("%d",&n);
    printf("cac so le la: ");
    for (i=0;i<=n;i++)
    {
        if (i%2!=0)
            printf ("%d",i);
    }
    return 0;

}
