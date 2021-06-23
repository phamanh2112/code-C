// nhapGDP nhap 2011 va toc do tang truong kinh te binh quan sau do tinh binh quan GDP cua 2013  va 2012
#include<stdio.h>
int main ()
{
    float GDP_2011;
    float Toc_Do;
    float GDP_sau;
    int Nam=2011;
    printf("nhap GDP 2011= ");
    scanf("%f",&GDP_2011);
    printf("nhap toc do tang truong binh quan= ");
    scanf("%f",&Toc_Do);
    printf("%5s%9.2s\n","Nam", "GDP");
    printf("%5d%9.2f\n",2011,GDP_2011 );
    int t=GDP_2011;
    for(int i=2012; i<=2013; ){
        GDP_sau= (float) t*(1+Toc_Do/100);
        printf("%5d%9.2f\n",i, GDP_sau);
        t=GDP_sau;
        i++;

    }
    return 0;
}
