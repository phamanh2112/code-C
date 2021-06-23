/* viêìt chuong triÌnh nhâòp vaÌo sôì nguyên duong n. sau ğoì in ra maÌn hiÌnh ma trâòn xoaìn ôì theo daòng
1 2 3
8 9 4
7 6 5 võìi n=3
*/
#include<stdio.h>
int main ()
{
    int a[100][100];
    int gt=1;
    int d=0, dong, cot;
    int n;
    printf("nhap ma tran cap n= ");
    scanf("%d", &n);
    dong= n-1;
    cot= n-1;
    while(d<=n/2){
        for(int i=d; i<=cot; i++){
            a[d][i] = gt++;
        }
        for(int i=d+1; i<=dong; i++){
            a[i][cot] = gt++;
        }
        for(int i=cot; i>d; i--){
            a[dong][i] = gt++;
        }
        for(int i=dong; i>d; i--){
            a[i][d] = gt++;
        }
        d++; dong--; cot--;
    }
    for (int i=0; i<n; i++){
        for(int j=0;j < n; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;

}



