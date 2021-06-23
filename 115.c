//Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh.
//Tính điểm trung bình và xuất kết quả
#include<stdio.h>
#include<string.h>
int main()
{
    fflush(stdin);
    int str[20];
    float diemT, diemV, diemTB;
    printf("nhap ho ten hoc sinh ");
    fgets(str, 20, stdin);
    printf("nhap diem toan: ");
    scanf("%f",&diemT);
    printf("nhap diem van: ");
    scanf("%f", &diemV);
    diemTB=  (diemT+diemV)/2;
    printf("diem TB= %f", diemTB);
    return 0;

}
