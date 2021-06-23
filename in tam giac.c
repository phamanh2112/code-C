/* viet chuong trinh in ra tam giac
***********
***** *****
****   ****
***     ***
**       **
***********
*/
int main()
{
    u=h;
  for (j=1;j<=h;j++)
    {
        printf("\t");
      for (i=1;i<=(2*h-1);i++)
         if (j<h)
            if (u==i||i==2*h-u)
                printf("*");
            else printf(" ");
         else printf("*");
      u=u-1;
      printf("\n");
    }

    return 0;
}
