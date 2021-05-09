#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(sqrt(fabs(cos(x))));
}
void main()
{
	float h,a=0,b=M_PI_2,s=0,integ;
	int i,n;
	printf("Enter the Number of sub Interval:");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=1;i<n;i++)
	{
		s=s+2*f(a+i*h);
	}
	s=s+f(a)+f(b);
	integ=(h/2)*s;
	printf("The Intergeration of given function is: %f",integ);
}
