/* ma 1. so cap
2. trung cap
3. dai hoc
4. cao hoc
5. tien si*/
#include<stdio.h>
int main ()
{
    int ma;
    printf("nhap ma: ");
    scanf("%d", &ma);
    if(ma<1 ||  ma>5)
        printf("moi nhap lai!");
    else{
    switch(ma){
        case 1: printf("so cap");break;
        case 2: printf("trung cap");break;
        case 3: printf("dai hoc");break;
        case 4: printf("cao hoc");break;
        case 5: printf("tien si");break;
    }
    }
    return 0;
}
