#include<stdio.h>
#include<conio.h>
#include<math.h>
#define n 3
void main()
{
	float a[n][n+1],x[n],u,sum;
	int i,j,k;
	printf("Enter the coefficient's of unknowns and R.H.S value of the Given equation\n");
	for(i=0;i<n;i++)
	for(j=0;j<n+1;j++)
	scanf("%f",&a[i][j]);
	for(k=0;k<n-1;k++)
	for(i=k+1;i<n;i++)
	{
		u=a[i][k]/a[k][k];
		for(j=0;j<n+1;j++)
		a[i][j]=a[i][j]-u*a[k][j];		
	}
	for(i=n-1;i>=0;i--)
	{
		sum=0;
		for(j=i+1;j<n;j++)
		sum+=a[i][j]*x[j];
		x[i]=(a[i][n]-sum)/a[i][i];
	}
	printf("\n solution of system of linear equation is :\n");
	for(i=0;i<n;i++)
	printf("\nx[%d]=%f",i+1,x[i]);
	getch();
}
