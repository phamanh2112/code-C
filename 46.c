//Hãy đếm số lượng chữ số lẻ của số nguyên dương n.
#include<stdio.h>
int main()
{
    int n;
    int dem=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=n; i>0;){
        int d=i%10;
        if(d%2!=0){
            dem++;
        }
        i/=10;
    }
    printf("co %d chu so le",dem);
    return 0;
}
