#include<stdio.h>
#include<math.h>
void tinhPTBacHai(float a,float  b,float c, int *pSoNghiem, float* x1, float *x2)
{
    float denta=b*b-4*a*c;
    if(a==0){
        if(b==0){
            if(c==0){
                printf("PT vo so nghiem ");
                return;
            }
            else *pSoNghiem=0;
            }
        else{
            *pSoNghiem=1;
            *x1=(float) -c/b;
        }

    }
    else {
       if(denta==0){
        *pSoNghiem=2;
        *x1=*x2=(float) -b/2*a;
       }
       else if(denta<0){
        *pSoNghiem=0;
       }
       else {
        *pSoNghiem=2;
        *x1=(float) (-b-sqrt(denta))/ 2*a;
        *x2=(float) (-b+sqrt(denta))/ 2*a;
       }
    }
}
int main()
{
   float a,b,c;
   int SoNghiem;
   float x1,x2;
   printf("nhap a,b,c= ");
   scanf("%f%f%f",&a,&b,&c);
   tinhPTBacHai(a,b,c,&SoNghiem,&x1,&x2);
   printf("so nghiem la %d\n", SoNghiem);
   if(SoNghiem==0){
        printf("phuong trinh vo nghiem");
   }
   else if(SoNghiem==2){
   printf("nghiem thu nhat %f\n",x1);
   printf("nghiem thu hai %f\n",x2);
   }
   else if(SoNghiem==1)
   printf("nghiem la %f\n",x1);
   else{printf("phuong trinh co vo so nghiem");}
   return 0;



}

