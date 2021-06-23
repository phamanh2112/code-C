// nhap mot chuoi ki tu in chuoi do theo chieu nguoc lai
#include<stdio.h>
int main()
{
    fflush(stdin);
    char str[100];
    printf("nhap chuoi: ");
    fgets(str, 100, stdin);

    //Tim chi so cua ki tu \0
    int j;
    for (j=0; str[j]!='\0';j++);
    printf("Phan tu ket thuc chuoi o %d\n",j);
    for(int i=j; i>=0; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}
