#include<stdio.h>
#include<math.h>
void phanTich(int n){

    int i=2;
    while(n>1){
        if(n%i == 0){
            printf("\t%d", i);
            n/=i;
        }
        else i++;

    }

}
int main(){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    phanTich(n);
    return 0;
}
