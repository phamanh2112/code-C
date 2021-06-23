
/*5.Viết một chương trình tính lương thực lãnh của một nhân viên theo công thức dưới đây

Lương cơ bản : $ 12000
DA : 12% lương cơ bản
HRA : $150
TA : $120
Các mục khác : $450
      Thuế :
  PF :14% lương cơ bản   và   IT: 15% lương cơ bản

Lương thực lãnh = Lương cơ bản + DA + HRA + TA + Các mục khác – (PF + IT)*/
#include<stdio.h>
int main()
{
    int HRA,TA,K;
    float L,Lcb;
    float DA,PF,IT;
    Lcb=12000;
    DA=(12/100)*(Lcb);
    HRA=150;
    TA=120;
    K=450;
    PF=(14/100)*(Lcb);
    IT=(15/100)*(Lcb);
    L=Lcb+DA+HRA+TA+K-(PF+IT);

    printf("muc luong thuc lanh: %.3f",L);
    return 0;

}

