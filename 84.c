//Giải phương trình và biện luận phương trình 𝑎𝑥 + 𝑏 = 0
#include<stdio.h>
int main()
{
    int a, b;
    float x;
    printf("nhap a,b= ");
    scanf("%d %d",&a,&b);
    if(a==0){
        if(b==0)
            printf("vo so nghiem");
        else printf("pt vo nghiem");
    }
    else {
        x=(float) -b/a;
        printf("phuong trinh co nghiem la: %f",x);
    }
    return  0;
}
