//GDP_nam_trc*(1+(toc_do_tang_truong/100))=GDP nam sau
#include<stdio.h>
#include<string.h>
int main()
{
    float t,d,T,S;
    int nam=2014;
    printf("nhap GDP 2014= ");
    scanf("%f",&t);
    printf("toc do tang= ");
    scanf("%f",&d);
    printf("%6s%8s\n","Nam","GDP");
    printf("%6d%8.2f\n",2014,t);
    T=t;
    while(S<t*2)
    {
    S=(float)(T*(1.00+(float)d/100));
    nam++;
    T=S;
    printf("%6d%8.2f\n",nam,S);
    }


}
