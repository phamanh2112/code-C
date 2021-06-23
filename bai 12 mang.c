/*Viết chương trình nhập vào một số n sau đó in ra màn hình ma trận xoáy
cấp n có dạng nhƣ sau:
Giả sử với n = 4
1  2  3  4
12 13 14 5
11 16 15 6
10 9  8  7
*/
#include<stdio.h>
#define Max 100
void hoang(int a[][Max], int n,int x,int *t);

int main()
{
     int m,n,i,j;
     int a[Max][Max];
     printf("Nhap so dong, cot: ");scanf("%d",&n);
     for(i=1;i<=n;i++)
          for(j=1;j<=n;j++) a[i][j]=0;
     int t=1,x=1,m1=n,n1=n;
     while(t<=(n*n))
     {
          hoang(a,n1,x,&t);
          x++;m1--;n1--;
     }
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=n;j++)
               printf("%4d",a[i][j]);
          printf("\n");
     }
}

void hoang(int a[][Max], int n,int x,int *t)
{
     int i=x,j=x;
          while (j<n)
          {
               a[i][j++]=*t;
               (*t)++;
          }
          while (i<n)
          {
               a[i++][j]=*t;
               (*t)++;
          }
          while (j>x)
          {
               a[i][j--]=*t;
               (*t)++;
          }
          while (i>x)
          {
               a[i--][j]=*t;
               (*t)++;
          }
}
