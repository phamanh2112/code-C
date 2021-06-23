
#include <stdio.h>
#include<stdlib.h>
#define MAX_INT 0x7FFFFFFF

int randI(int min, int max)
{
    int tmp;
    tmp=min + rand()%(max-min+1);
    return tmp;
}
void sinhMangNguyen(int a[],int n)
{
    int i;
    for (i=0; i<n;i++)
    {
        a[i]=randI(1,100);
    }
}

void inMang(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
}

void ghiFileNhiPhan(FILE *file, char fileName[],int a[],int n)
{
    file=fopen(fileName,"wb");
    int i;
    if (file!=NULL)
    {
        for (i=0;i<n;i++)
        {
            fwrite(&a[i],sizeof(a[i]),1,file);
        }

    }
    fclose(file);
}
void docPhanTuThuI(FILE *file,char fileName[],int index)
{
    file = fopen(fileName,"rb");
    if (file != NULL)
    {
        int tmp;
        rewind(file);
        fseek(file,index*sizeof(int),SEEK_SET);
        fread(&tmp,sizeof(int),1,file);
        printf("tmp = %4d",tmp);
    }
    fclose(file);
}

int main()
{
    FILE *file;
    char fileName[100]="D:\\input.txt";

    int a[100];
    int n=100;

    sinhMangNguyen(a,n);
    inMang(a,n);
    ghiFileNhiPhan(file,fileName,a,n);
    docPhanTuThuI(file,fileName,5);
    return 0;
}
