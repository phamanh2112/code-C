
/* viet chuong trinh nhap vao tong thu nhap GDp cua nuoc ta nam 2010
tinh theo USD va toc do tang truong kinh te binh quan nao do, in ra man hinh thu nhap GDP cua cac nam theo dang
Nam          GDP
2010        100
2011        112,5
cho den nam co GDP>=2 lan nam 2010 thi dung
*/
#include<stdio.h>
int main()
{
    float GDP_2010;
    int nam=2010;
    float GDPs, GDPt;
    float toc_Do_Tang;
    printf("nhap GDP_2010= ");
    scanf("%f", &GDP_2010);
    printf("nhap toc do tang truong: ");
    scanf("%f", &toc_Do_Tang);
    printf("\n%5s%8s\n", "Nam", "GDP");
    printf("\n%5d%8.2f\n", 2010, GDP_2010);
    GDPt=GDP_2010;
    while(GDPs < 2*GDP_2010)
    {
        GDPs=GDPt + GDPt*(toc_Do_Tang/100);
        GDPt= GDPs;
        nam++;
        printf("\n%5d%8.2f\n", nam, GDPs);

    }
    return 0;
}
