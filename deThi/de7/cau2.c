/* vi��t chuong tri�nh nh��p va�o s�� nguy�n duong n. sau �o� in ra ma�n hi�nh ma tr��n xoa�n �� theo da�ng
1 2 3
8 9 4
7 6 5 v��i n=3
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



