
#include<stdio.h>
int main()
{
    int n;
    int q=0;
    printf("Nhap vao so n");
    scanf("%d",&n);
    while(n>0)
    {
        for(int i=1; i<n;i++)
                printf("%c",' ');
                for(int k=0; k<=q;k++)

        printf("%c",'*');
                        for(int k=0; k<q;k++)
                        printf("%c",'*');
                        n--;
                        q++;


            printf("\n");

    }
    return 0;
}
