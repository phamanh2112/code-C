#include<stdio.h>
#include<string.h>
const o=1000;
int A[1000][1000],i,j,k,n,m,max,min,a,b;
char c[20];
void nhap(int  A[][o])
{
	printf("nhap n&m : "); scanf("%d%d",&n,&m);
	printf("nhap ma tran: \n");
	for (i=0;i<n;i++)
		for(j=0;j<m;j++) scanf("%d",&A[i][j]);
	getch();
}
void xuat(int A[][o])
{
	for (i=0;i<n;i++)
	   {
		for(j=0;j<m;j++) printf("%d  ",A[i][j]);
		printf("\n");
	   }
	getch();
}
void in(int A[][o])
{
	int a,b;
	xuat(A);printf("\n\n");
	for (i=0;i<n;i++)
	   {
	   	max=A[i][0];
		for(j=0;j<m;j++)
		  {
		   if(max<A[i][j]) {max=A[i][j];a=i;b=j;}	// tim max trong hang i
		  }
		min=A[0][b];
		for (k=0;k<n;k++)
		    if (min>A[k][b]) min =A[k][b];   // kt xem max hang i có là min cot j không
		if (max==min) printf("%d ",max);
	   }
	getch();
}
void menu()
{
 printf("1. Nhap ma tran co n*m .\n2. Xuat ma tran.\n3. Xuat A[i][j] la max trong hang i la min trong cot j.\n\n (Nhap phim bat ki khac 1,2,3 de thoat)");
}
int main()
{
	printf("nhap n&m : "); scanf("%d%d",&n,&m);
	printf("nhap ma tran: \n");
	for (i=0;i<n;i++)
		for(j=0;j<m;j++) scanf("%d",&A[i][j]);
	loop:
	system("cls");
	menu();
	printf("\n\nMoi nhap lua chon: ");fflush(stdin);gets(c);
	if (strcmp(c,"1")==0) { system("cls");	nhap(A); goto loop;}
	if (strcmp(c,"2")==0) { system("cls");	xuat(A); goto loop;}
	if (strcmp(c,"3")==0) { system("cls");	in(A); goto loop;}
}
