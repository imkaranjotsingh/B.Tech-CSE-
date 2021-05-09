#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(cos(x)-x*exp(x));
}
float df(float x)
{
	return(-sin(x)-exp(x)-x*exp(x));
}
void main()
{
	float x0,x1,h,err=0.00005;
	int itr,maxitr;
	printf("Enter the value of X0 and Max iterations :");
	scanf("%f%d",&x0,&maxitr);
	for(itr=1;itr<maxitr;itr++)
	{
		h=f(x0)/df(x0);
		x1=x0-h;
		printf("Iteration No %d x=%f\n",itr,x1);
		x0=x1;
		if(fabs(h)<fabs(err))
		{
			printf("\n After %d Iteration value of X is %f\n ",itr,x1);
			break;
	    }
	}
	getch();
}
