#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(2*x-log10(x)-6);
}
void main()
{
	float a,b,x,x1,err=0.00005;
	int itr=1,n;
	printf("Enter the value of A ,B and maximum Iterations:");
	scanf("%f%f%d",&a,&b,&n);
	x=a-((b-a)/(f(b)-f(a)))*f(a);
	printf("Iterations no %d x = %f\n ",itr,x);
	itr=itr+1;
	while(itr<n)
	{
		a=b;
		b=x;
		
		x=a-((b-a)/(f(b)-f(a)))*f(a);
		printf("Iterations no %d x = %f\n",itr,x);
		if(fabs(x1-x)<err)
		{
			printf("\nAfter %d iterations value of x is %f \n",itr,x);
			break;
		}
		else
		{
			itr++;
			x1=x;
		}
	}
	if(itr>=n)
		printf("\n Solution doesn't exist as iterations are not sufficient");
}
