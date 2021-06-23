#include<stdio.h>
void nhap(float a[][100], int d, int c)
{
    for(int i=0; i<d; i++){
        for(int j=0; j<c; j++){
            scanf("%f", &a[i][j]);
        }
    }
}
void xuat(float a[][100], int d, int c)
{
    for(int i=0; i<d; i++){
        for(int j=0; j<c; j++){
            printf("%7.2f", a[i][j]);
        }
        printf("\n");
    }
}

void Max(float a[][100], int d, int c)
{
    float max= a[0][0];
     for(int i=0; i<d; i++){
        for(int j=0; j<c; j++){
           if(max< a[i][j])
            max= a[i][j];
        }
    }
    printf("MAX= %.2f", max);
}
void Min(float a[][100], int d, int c)
{
    float min= a[0][0];
     for(int i=0; i<d; i++){
        for(int j=0; j<c; j++){
           if(min> a[i][j])
            min= a[i][j];
        }
    }
    printf("MIN= %.2f", min);
}

int main()
{
    int a[100][100];
    int d,c;
    printf("nhap so dong cot: ");
    scanf("%d%d", &d,&c);
    nhap(a,d,c);
    xuat(a,d,c);
    Max(a,d,c);
    Min(a,d,c);
    return 0;

}
