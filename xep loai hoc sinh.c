/* 9, 10 gioi
8,7 kha
5,6 tb
0.. 4 yeu*/
#include<stdio.h>
int main ()
{
    int diem;
    printf("nhap diem: ");
    scanf("%d", &diem);
    if(diem<0 || diem>10)
       printf("nhap lai");
    else {
        switch(diem){
        case 0:case 1:case 2:case 3:case 4: printf("xep loai yeu");break;
        case 5:case 6: printf("xep loai trung binh"); break;
        case 7:case 8:printf("xep loai kha"); break;
        //case 9:case 10:printf("xep loai gioi "); break;
        default: printf("xep loai gioi"); // cac truong hop ngan con lai ding default
        }
    }
    return 0;

}
