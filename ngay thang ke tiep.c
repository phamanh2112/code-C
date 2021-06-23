
#include <stdio.h>
int main()
{
    int dd,mm,yy;
    int a=1;
    printf("nhap ngay thang nam: ");
    scanf("%d%d%d",&dd,&mm,&yy);
    dd+=1;
    if (yy==0||dd<=0||mm<=0||mm>12)
        printf("ko ton tai");
    else{
    switch(mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(dd>31)
            a=0;
break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dd>30)
           a=0;
        break;
    case 2:
        if((yy%4==0&&yy%100!=0)||yy%400==0)
        {
            if(dd>29)
                 a=0;
        }
        else{
            if(dd>28){
             a=0;
            }
        }

    }
    }
  if(a==1){
    printf("%d/%d/%d",dd,mm,yy);}
    else{
            dd=1;
            mm++;
            if(mm==13){
                mm=1;
                yy++;

            }
 printf("%d/%d/%d",dd,mm,yy);

}
    return 0;
}
