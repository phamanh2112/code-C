
/*Cho hai dãy số đã được sắp xếp theo thứ tự tăng dần S và Q.
Dãy S gồm m phần tử: s0, s1, s2, ..., sm-1
Dãy Q gồm n phần tử: q0, q1, q2, ..., qn-1
Hãy in ra (theo thứ tự tăng dần) các số thuộc dãy S mà không thuộc dãy Q.

Input
Dòng 1: m, 0<m<1000;
Dòng 2: m số nguyên trên đoạn [-100, 100] được sắp xếp theo thứ tự tăng dần
Dòng 3: n, 0 < n < 1000
Dòng 4: n số nguyên trên đoạn [-100, 100] được sắp xếp theo thứ tự tăng dần

Output
Các phần tử của dãy S mà không thuộc dãy Q

VD
Input:
20
-9  -8  -6  -5  -4  -3  -3  -2  -2   0   2   2   4   5   6   7   7   8   8   9
15
-6  -6  -5  -2   0   1   1   1   3   3   5   6   7   7   8

Output:
-9  -8  -4  -3  -3   2   2   4   9*/
#include<stdio.h>
#define Max 100
void nhapMang(int s[],int q[], int n, int m)
{
    for(int i=0 ;i<n;i++)
    {
        printf("s[%d]= ",i);
        scanf("%d",&s[i]);
    }
    for(int j=0 ;j<m;j++)
    {
        printf("q[%d]= ",j);
        scanf("%d",&q[j]);
    }
}
void xuatMang(int s[],int q[], int n,int m)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",s[i]);
    }
    printf("\n");
    for(int j=0;j<m;j++)
    {
        printf("%d\t",q[j]);
    }

}
void phanTuKhac(int s[],int q[],int n, int m, int b)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
    {
        if(s[i]!=q[j])
           {
            b=s[i];
           }
        if(s[i]==q[j])
        {
            b=0;
            break;
        }
    }
    if(b!=0)
        printf("%d\t",b);
    }



}
int main()
{
    int s[Max];
    int q[Max];
    int n,m,b;
    printf("nhap so luong phan tu trong mang s: ");
    scanf("%d",&n);
    printf("nhap so luong phan tu trong mang q: ");
    scanf("%d",&m);
    nhapMang(s,q,n,m);
    xuatMang(s,q,n,m);
    printf("\n");
    phanTuKhac(s,q,n,m,b);
    return 0;
}
