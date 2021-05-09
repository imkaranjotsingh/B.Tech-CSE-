#include<conio.h>
#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return(2*x+3*y);
}
void main()
{
	float x0,y0,x,h,x1,y1;
	printf("Enter the value of X0 , y0 , h , x\n");
	scanf("%f%f%f%f",&x0,&y0,&h,&x);
	x1=x0;
	y1=y0;
	while(1)
	{
		if(x1>x)
		return;
		y1+=h*f(x1,y1);
		x1+=h;
		printf("when x=%f,y=%f\n",x1,y1);
		getch();
	}
}
