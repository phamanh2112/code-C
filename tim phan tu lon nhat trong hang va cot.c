#include<stdio.h>
#define Max 100
#include<stdlib.h>
void nhapMang(int A[][Max], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d",&A[i][j]);
        }
    }
}
void xuat(int A[][Max], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
                printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void timPhanTu(int A[][Max], int dong, int cot)
{
    int a,b;
    for (int i=0; i<dong ;i++)
	   {
	   	int max=A[i][0];
		for(int j=0;j<cot;j++)
		  {
		   if(max<A[i][j]) {max=A[i][j];a=i;b=j;}	// tim max trong hang i
		  }
		int min=A[0][b];
		for (int k=0;k<cot;k++)
		    if (min>A[k][b]) min =A[k][b];   // kt xem max hang i có là min cot j không
		if (max==min) printf("%d ",max);
	   }
	getch();
}

int main()
{
    int a,b;
    int dong, cot;
    printf("nhap dong va cot: ");
    scanf("%d%d",&dong,&cot);
    int A[Max][Max];
    nhapMang(A, dong, cot);
	xuat(A, dong, cot);
	printf("\n\n");
	timPhanTu(A, dong, cot);
	return 0;

}
