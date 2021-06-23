
//Hãy đếm số lượng chữ số của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n;
    int dem=0;
    printf("nhap n= ");
    scanf("%d",&n);
    printf(" so luong chu so cua %d la: ",n);
    while(n>0)
    {
        n/=10;
        dem++;
    }
   printf("%d",dem);
    return 0;
}
