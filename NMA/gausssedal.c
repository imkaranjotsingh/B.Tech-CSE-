#include<stdio.h>
#include<conio.h>
#include<math.h>
#define n 3
void main()
{
	float a[n][n+1],x[n],t,s,aerr,maxerr,err;
	int i,j,itr,matrix;
	for(i=0;i<n;i++)
	x[i]=0;
	printf("Enter the Elements of augmented matrix \n");
	for(i=0;i<n;i++)
	for(j=0;j<n+1;j++)
	scanf("%f",&a[i][j]);
	printf("Enter allowed error and max iterations \n");
	scanf("%f%d",&aerr,&matrix);
	printf("Iterration x[1] x[2] x[3]\n");
	for(itr=1;itr<=matrix;itr++)
	{
		maxerr=0;
		for(i=0;i<n;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			if(j!=i)
			s+=a[i][j]*x[j];
			t=((a[i][n]-s)/a[i][i]);
			err=fabs(x[i]-t);
			if(err>maxerr)
			maxerr=err;
			x[i]=t;
		}
		printf("%d",itr);
		for(i=0;i<n;i++)
		printf("%9.4f",x[i]);
		printf("\n");
		if(maxerr<aerr)
		{
			printf("converges in %3d iteration \n",itr);
			for(i=0;i<n;i++)
			printf("x[%d]=%f\n",i+1,x[i]);
			break;
		}
	
	}
}
