
/*Trong nhiều trường hợp, ta phải in ra màn hình giá trị các phần tử của mảng một chiều.
Nếu số lượng phần tử của mảng là lớn thì ta cần phải in thế nào đó để thông tin được hiện ra một cách đẹp và dễ đọc.
Bài tập này yêu cầu in ra các phần tử của mảng một chiều, trong đó, mỗi phần tử chiếm một số vị trí nhất định,
 và mỗi dòng chứa một số lượng phần tử nhất định (trừ dòng cuối cùng).

Input
Dòng 1: n - số lượng phần tử trong mảng, n<500
Dòng 2: n số nguyên trong khoảng [-1000, 1000]
Dòng 3: r - số lượng phần tử cần in ra trên mỗi dòng, 0 < r < 15

Output
In ra các phần tử của mảng đã cho, mỗi phần tử chiếm đúng 6 vị trí; trên mỗi dòng (ngoại trừ dòng cuối cùng) in ra r phần tử.

VD
Input:
19
342 -824 980 -194 150 -979 614 472 197 477 228 -679 -351 932 33 -397 101 546 -311
5

Output:
   342  -824   980  -194   150
  -979   614   472   197   477
   228  -679  -351   932    33
  -397   101   546  -311
  */
  #include<stdio.h>
  #define Max 100
  /*void nhapMang(int a[], int n)
  {
      for(int i=0;i<n;i++)
      {
          printf("a[%d]= ",i);
          scanf("%d",&a[i]);
      }
  }
  void xuatMang(int a[],int n)
  {
      for(int i=0;i<n;i++)
      {
          printf("%d   ",a[i]);
      }
  }
  void soLuongPhanTuCanInRaMoiDong(int a[], int n, int r)
  {
      printf("nhap so luong phan tu tren mot dong: ");
      scanf("%d",&r);
      for(int i=1;i<=n;i++)
      {
        printf("%6d",a[i]);
        {
            if(i%a[n+1]==0)
               printf("\n");
        }

      }
  }
  int main()
  {
      int a[Max];
      int n,r;
      printf("nhap cac phan tu trong mang: ");
      scanf("%d",&n);
      nhapMang(a,n);
      soLuongPhanTuCanInRaMoiDong(a,n,r);
  }
*/

#include <stdio.h>
#include <math.h>
#define Max 100
int main()
{
    int a[Max];
    int n,r;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1; i<n+2; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        printf("%6d",a[i]);
        if(i%a[n+1]==0)
            printf("\n");
    }
}
