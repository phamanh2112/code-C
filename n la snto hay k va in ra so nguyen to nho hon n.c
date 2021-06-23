
#include <stdio.h>
#include <math.h>
void songuyento(int n){
    if(n < 2)
        printf("%d khong phai so nguyen to\n", n);
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            count++;
    }
    if(count == 0)
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai so nguyen to\n", n);
}
void cacsonguyento(int n){
    if(n<=2)
       printf("khong co so nguyen to nao nho hon 2 \n");
   else{
       printf("cac so nguyen to nao nho hon %d \n",n);
       for(int i =2;i<n;i++){
       int count=0;
       for(int j=2;j<i;j++){
            if(i%j==0){
               count=1;
               break;
               }
           }
       if(count==0)
         printf("%d \n",i);
     }
   }
}
int main(){
  int n;
  printf("\nNhap n = ");
  scanf("%d", &n);
  songuyento(n);
  cacsonguyento(n);
  return 0;
}
