
#include<stdio.h>
#include<stdlib.h>
typedef struct sinh_vien
{
    char ho_ten[20];
    float diem_tb;
    struct sinh_vien *tiep;
}p_sv;
p_sv *p_dau, *p_cuoi, *p;
void tao_ds()
{
    char ht[20], chon;
    float x;int stt=0;
    printf("nhap danh sach sinh vien\n");
    p_dau=NULL;
    do
    {
        fflush(stdin);
        printf("nhap thong tin ve sinh xien thu %d ",stt++);
        printf("nhap ho ten: ");
        gets(ht);
        printf("nhap diem trung binh: ");
        scanf("%f",&x);
        p=(p_sv *)malloc(sizeof(p_sv));
        strcpy(p->ho_ten,ht);
        p->diem_tb =x;
        if(p_dau == NULL)
        {
            p_dau =p;
            p_cuoi=p;

        }
        else {
            p_cuoi->tiep =p;
            p_cuoi=p;
        }
        p->tiep=NULL;
        printf("co nhap nua khong");
        fflush(stdin);
        chon=getchar();

    }while(chon !='k');}
    void hien_ds()
    {
        int stt=0;
        printf("danh sach sinh vien\n");
        printf("hoten       diemtb\n");
        p= p_dau;
        while(p!=NULL)
        {
            printf("%s       %6.2f\n",p->ho_ten,p->diem_tb);
            p=p->tiep;
        }

    }

void chen_pt()
{


         p_sv  *p_tim; float x;
         char ht[20];
         p =(p_sv *)malloc(sizeof(p_sv));
         printf("\n nhap ho ten sinh vien can chen: ");
         fflush(stdin);
         gets(p->ho_ten);
         printf("\n nhap diem trung binh: ");
         scanf("%f",&x);
         p->diem_tb=x;
         p->tiep=NULL;
         printf("\nmuoon chen sau sinh vien nao");
         fflush(stdin);
         gets(ht);
         p_tim=p_dau;
         while ((p_tim!=NULL)&&(strcmpi(p_tim->ho_ten,ht)))
            p_tim=p_tim->tiep;
         if(p_tim==NULL)
         printf("\nkhong tim thay vij tri can chen");
         else
         {
             if(p_tim->tiep==NULL) p_tim->tiep=p;
             else
             {
                 p_tim=p_tim->tiep;
                 p_tim->tiep=p;
             }
             printf("\nda chen xong ");

         }

     }
     void xoa_pt()
     {
         p_sv  *p_tim,*p_truoc;
         char ht[20];
         printf("\n nhap ho ten sinh vien can xoa: ");
         fflush(stdin);
         gets(ht);
         p_tim=p_dau;
         while ((p_tim!=NULL)&&(strcmpi(p_tim->ho_ten,ht)))
          {

          p_truoc=p_tim;
            p_tim=p_tim->tiep;
          }
         if(p_tim==NULL)
         printf("\nkhong tim thay vi tri can xoa");
         else
         {
             if(p_tim->tiep==NULL) p_truoc->tiep=NULL;
             else
             {
                 if(p_tim==p_dau)
                 p_dau=p_tim->tiep;
                 else
                 p_truoc->tiep=p_tim->tiep=p;
                 free(p_tim);
                 printf("da xoa xong");

             }


         }

     }

    int main()
    {
       tao_ds();
       hien_ds();
       chen_pt();
       xoa_pt();

        return 0;

    }

