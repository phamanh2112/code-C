#include <stdio.h>
//#include<iostream>
//using namespace std;
int main()
{
    int dd,mm,yy;
    int a=1;
    printf("nhap ngay thang nam: ");
    scanf("%d%d%d",&dd,&mm,&yy);
    printf("%d/%d/%d\n",dd,mm,yy);
    if (yy==0||dd<=0||mm<=0||mm>12)
        printf("ngay thang khong hop le!!!");
    else
	{
        switch(mm)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:
                if(dd == 31){
                    dd = 1;
                    mm++;
                }
                else if(dd <31 && dd >0){
                    dd++;
                }
                else {
                    printf("ngay thang khong hop le");
                    return 0;
                }
                printf("%d/%d/%d",dd,mm,yy);
                break;
            case 4:case 6:case 9:case 11:
                if(dd ==30){
                    dd = 1;
                    mm++;
                }
                else if(dd <30 && dd >0){
                    dd++;
                }
                else {
                    printf("ngay thang khong hop le");
                    return 0;
                }
                printf("%d/%d/%d",dd,mm,yy);
                break;
            case 2:
                if((yy%4==0&&yy%100!=0)||yy%400==0){
                    if(dd==29){
                        dd = 1;
                        mm++;
                    }
                    else if(dd <29 && dd >0){
                        dd++;
                    }
                    else{
                        printf("ngay thang khong hop le");
                        return 0;
                    }

                }
                else{
                    if (dd == 28){
                        dd = 1;
                        mm++;
                    }
                    else if(dd <28 && dd >0){
                        dd++;
                    }
                    else{
                        printf("ngay thang khong hop le");
                        return 0;
                    }
                }
                printf("%d/%d/%d",dd,mm,yy);
                break;
            case 12:
                if(dd == 31){
                    dd = 1;
                    mm=1;
                    yy ++;
                }
                else if(dd <31 && dd >0) {
                    dd++;
                }
                else {
                    printf("ngay thang khong hop le");
                    return 0;
                }
                printf("%d/%d/%d",dd,mm,yy);
                break;

        }
    }

        return 0;

}

