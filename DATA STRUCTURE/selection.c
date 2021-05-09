#include<stdio.h>
void selection(int a[],int n);
void main()
{
	int i,n,a[20];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	printf("Sorted list Elements:\n");
	for(i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void selection(int a[],int n)
{
	int temp,small,loc,i,j;
	for(i=1;i<=n-1;i++)
	{
		small=a[i-1];
		loc=i-1;
		for(j=i;j<=n-1;j++)
		{
			if(a[j]<small)
			{
				small=a[j];
				loc=j;
			}
		}
		if(loc!=(i-1))
		{
			temp=a[i-1];
			a[i-1]=a[loc];
			a[loc]=temp;
		}
	}
}
