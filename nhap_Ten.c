
#include <stdio.h>
int main()
{
    FILE *file;
    char fileName[100] = "F:\\code c\\file\\input.txt";

    file= fopen(fileName, "r");

    if(file!=NULL)
    {
        int soDong=0;
        while (!feof(file))
        {
            char tmp[100];
            soDong++;
            fgets(tmp, 100, file);
        }
        printf("so dong la: ",soDong);
    }
    fclose(file);
    return 0;
}
