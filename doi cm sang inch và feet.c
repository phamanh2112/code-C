/*Viết một chương trình nhập vào một số thực. Ðơn vị tính cho số này là centimet (cm). Hãy in ra số tương đương tính bằng foot (số thực, có 1 số lẻ thập phân) và inch (số thực, có 1 số lẻ thập phân). Ðộ chính xác của foot và inch là một số lẻ thập phân.
Hướng dẫn: 2.54 centimeters = 1 inch, và 12 inches = 1 foot.
Nếu giá trị nhập vào là 333.3, kết quả là:
333.3 centimeters tương đương 10.9 feet.
333.3 centimeters tương đương 131.2 inches.*/
#include<stdio.h>
int main()
{
    float n,f,i;
    printf("nhap n= ");
    scanf("%f",&n);
    i=n/2.54;
    f=i/12;
    printf("%.1f centimeters tuong duong %.1f feet\n",n,f);
    printf("%.1f centimeters tuong duong %.1f inches",n,i);
    return 0;

}
