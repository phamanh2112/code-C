#include<stdio.h>
#include<stdlib.h>
int main()
{
  // printf("Rand-Max= %d", RAND_MAX);
  srand(time(NULL));
  for(int i=0; i<20;i++)
  {
      int random= 1+rand()%6;
      printf("%5d ",random);
  }
    return 0;
}
