#include<stdio.h>
int largest(int a[],int);
void radix(int a[] ,int);
void main()
{
	int i,n,a[20];
	printf("Enter the Number of elements in array:");
	scanf("%d",&n);
	printf("\nEnter the Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	radix(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int largest(int a[],int n)
{ 
	int temp=a[0],i;
	for(i=0;i<n;i++)
	{
		if(temp<a[i])
			temp=a[i];	
	}
	return temp;	
}
void radix(int a[],int n)
{
	int bucket[10][10],count[10];
	int i,j,k,reminder,nop=0,divisor=1,large,pass,temp;
	
	temp=largest(a,n);
	printf("The largest Element %d\n",temp);
	while(temp>0)
	{
		nop=nop+1;
		temp=temp/10;
	}
	for(pass=0;pass<nop;pass++)
	{
		for(i=0;i<10;i++)
		{
			count[i]=0;
		}
		for(i=0;i<n;i++)
		{
			reminder=a[i]/divisor;
			reminder=reminder%10;
			bucket[reminder][count[reminder]]=a[i];
			count[reminder]=count[reminder]+1;
		}
		i=0;
		for(k=0;k<10;k++)
		{
			for(j=0;j<count[k];j++)
			{
				a[i]=bucket[k][j];
				i=i+1;
			}
		}
		divisor=divisor*10;
	}
}	
