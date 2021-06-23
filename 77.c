
//Viết chương trình tính tổng của dãy số sau : S(n) = 1 + 2 + 3 + … + n.
#include<stdio.h>
int main()
{
    int n,tong=0,tich = 1,i;
    float s;
    printf("nhap n= ");
    scanf("%d",&n);
    if(n<=0){
        printf("khong dc");
    }
    else{
        for(int i=1; i<=n;i++)
        {
            tong+=i;
            tich*=i;
        }
    }
    s = (float) tong/tich;
    printf("S= %f",s);
    return 0;

}
