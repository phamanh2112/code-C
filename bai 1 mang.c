
/*Cho mảng một chiều A, n phần tử (n&lt;100). Dùng hàm Xây dựng chương
trình thực hiện các công việc sau:

1. Nhập mảng
2. Xuất mảng
3. Đếm số phần tử âm
4. Tìm phần tử Max và Min của mảng
5. Tìm phần tử âm lớn nhất và dương bé nhất của mảng
6. Liệt kê các số nguyên tố trong mảng
7. Liệt kê các số chính phương trong mảng
8. Sắp xếp mảng theo thứ tự tăng dần
9. Sắp xếp mảng theo thứ tự giảm dần
10. Thêm/Xóa/Sửa một phần tử vào mảng*/
#include<stdio.h>
#include<math.h>
#define Max 100
void nhapMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
}
void xuatMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
    printf("\n");

}
void demSoPhanTuAm(int a[], int n, int d)
{
    d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            d+=1;
    }
    printf("so phan tu am la: %d\n ",d);
}
void phanTuMax(int a[], int n, int max)
{
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Max= %d\n",max);
}
void phanTuMin(int a[], int n, int min)
{
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Min= %d\n",min);
}
void timPhanTuAmLonNhat(int a[],int n)
{
    int max=-1;
    printf("phan tu am lon nhat trong mang la: ");
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(max==-1)
            {
                max=a[i];

            }
            else if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    printf("%d\n",max);


}
void timPhanTuDuongNhoNhat(int a[],int n)
{
    int min=0;
    printf("phan tu duong nho nhat trong mang la: ");
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            if(min==0)
            {
                min=a[i];

            }
            else if(min>a[i])
            {
                min=a[i];
            }
        }

    }
    printf("%d\n",min);
}
int kiemTraSoNguyenTo(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    else{
        for(int i=2; i<n;i++)
        {
            if (n%i==0)
                return 0;
        }
        return 1;
    }
    return 0;
}
void lietKeSNT(int a[], int n)
{
    printf("cac so nguyen to la: ");
    for(int i=0; i<n;i++)
    {
        if(kiemTraSoNguyenTo(a[i])==1)
            printf("%d\t",a[i]);
    }
    printf("\n");

}
int kiemTraSoChinhPhuong(int n)
{

        if(sqrt(n)*sqrt(n)==n)
            return 1;
        return 0;

}
void lietKeSoChinhPhuong(int a[], int n)
{
    printf("so chinh phuoong trong mang la: ");
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoChinhPhuong(a[i])==1)
            printf("%d\t",a[i]);
    }
    printf("\n");

}
void sapXepTang(int a[], int n)
{
    printf("mang sap xep tang dan la: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void sapXepGiam(int a[], int n)
{
    printf("mang sap xep giam dan la: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int timPhanTu(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(i==x)
            return i;
    }
     return -1;
}
void xoaPhanTu(int a[], int n, int x)
{
    printf("day da xoa  mot phan tu: ");
    int vt=timPhanTu(a,n,x);
    if(vt==-1)
    {
        printf("khong tim thay vi tru can xoa\n");

    }
    else
    {
        for(int i=vt; i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
/*void themPhanTu(int a[], int n, int vt, int t)
{
    if(vt>=0&&vt<=n)
    {
        for(int i=n;i>vt;i--)
        {
            a[i]=a[i+1];
        }
            a[vt]=t;

        n++;
    }
    else printf(" khong tim thay vi tri can chen\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

}*/
void themPhanTu(int a[], int n,  int vt, int t)
{
	if(vt>=0 && vt<=n)
	{
		for(int i=n; i>vt; i--)
			a[i] = a[i-1];
		a[vt]=t;
		n++;
	}
	else
		printf("\nVi tri %d khong hop le.", vt);
		for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[Max],n,d,max,min;
    printf("nhap so luong phan tu: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    demSoPhanTuAm(a,n,d);
    phanTuMax(a,n,max);
    phanTuMin(a,n,min);
    timPhanTuAmLonNhat(a,n);
    timPhanTuDuongNhoNhat(a,n);
    lietKeSNT(a,n);
    lietKeSoChinhPhuong(a,n);
    sapXepTang(a,n);
    sapXepGiam(a,n);
    int x;
    printf("nhap vi tri can xoa: ");
    scanf("%d",&x);
    xoaPhanTu(a,n,x);
    int t,vt;
    printf(" nhap phan tu can chen: ");
    scanf("%d",&t);
    printf("nhap vi tri can chen ");
    scanf("%d",&vt);
    themPhanTu(a,n,vt,t);

    return 0;

}
