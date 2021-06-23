#include<stdio.h>
#include<string.h>
int n,i;
void in(int c)
{
	switch(c)
	{
		case  0  : {printf(" khong ");break;}
		case  1  : {printf(" mot ");  break;}
		case  2  : {printf(" hai ");  break;}
		case  3  : {printf(" ba ") ;  break;}
		case  4  : {printf(" bon ");  break;}
		case  5  : {printf(" nam ");  break;}
		case  6  : {printf(" sau ");  break;}
		case  7  : {printf(" bay ");  break;}
		case  8  : {printf(" tam ");  break;}
		case  9  : {printf(" chin "); break;}
	}
}
void in2 (int c)
{
	switch(c)
	{
		case  1  : { printf(" muoi ");     break;}
		case  2  : { printf(" hai muoi "); break;}
		case  3  : { printf(" ba muoi ");  break;}
		case  4  : { printf(" bon muoi "); break;}
		case  5  : { printf(" nam muoi "); break;}
		case  6  : { printf(" sau muoi "); break;}
		case  7  : { printf(" bay muoi "); break;}
		case  8  : { printf(" tam muoi "); break;}
		case  9  : { printf(" chin muoi ");break;}
	}
}
int main()
{
l:	printf("nhap so: ");scanf("%d",&n);
	if (n>100000||n<0) {printf("nhap lai\n\n"); goto l;}
	if (n<10) in(n)	;
	else if (n<100) { in2(n/10);if(n%10!=0) in(n%10); }
		 else if (n<1000)
		 	  {
			   	  in(n/100);printf("tram");
				  if((n%100)/10==0&n%10!=0) {printf(" linh");in(n%10);}
				  if((n%100)/10!=0)	{ in2((n%100)/10);if(n%10!=0) in(n%10); }
			  }
			  else  if (n<10000)
			  	   	{
						in(n/1000);printf("nghin");
						in((n%1000)/100);printf("tram");
						if((n%100)/10==0&n%10!=0) {printf(" linh");in(n%10);}
						if((n%100)/10!=0)	{ in2((n%100)/10);if(n%10!=0) in(n%10); }
				    }
					else
					{
						in2(n/10000);if((n%10000)/1000!=0) in((n%10000)/1000);printf("nghin");
						if(n%100!=0) {in((n%1000)/100);printf("tram");}
						if((n%100)/10==0&n%10!=0) {printf(" linh");in(n%10);}
						if((n%100)/10!=0)	{ in2((n%100)/10);if(n%10!=0) in(n%10); }
			  		}
	getch();system("cls");goto l;
}
