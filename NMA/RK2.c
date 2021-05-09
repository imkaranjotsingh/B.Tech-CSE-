#include<conio.h>
#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return(2*x+3*y);
}
void main()
{
	float x0,y0,h,xn,x,y,k1,k2,k;
	printf("Enter the value of x0 , y0, h and Xn\n");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	x=x0;
	y=y0;
	while(1)
	{
		if(x==xn)
		break;
		k1=h*f(x,y);
		k2=h*f(x+h,y+k1);
		k=(k1+k2)/2;
		x+=h;
		y+=k;
		printf("When X=%f, y=%f \n",x,y);
		getch();
	}
}
