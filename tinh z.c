
/*2.Viết một chương trình tính giá trị của biểu thức với các giá trị sau:

z = a*b+(c/d)-e*f ;

	a = 10
	b = 7
	c = 15.75
	d = 4
	e = 2
	f = 5.6
	*/
	#include<stdio.h>
	int main()
	{
	    int a=10, b=7, d=4, e=2;
	    float c=15.75, f=5.6;
	    float z;
	    z=a*b+(c/d)-e*f;
	    printf("Z= %f",z);
	    return 0;
	}
