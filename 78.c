//Liệt kê tất cả các ước số của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
     printf("uoc so cua %d la: ",n);
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            printf("%d\t",i);
    }
    return 0;

}
