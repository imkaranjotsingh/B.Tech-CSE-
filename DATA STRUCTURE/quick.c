#include<stdio.h>
void quick(int a[],int,int);
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
	quick(a,0,n-1);
	printf("Sorted list Elements:\n");
	for(i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void quick(int a[],int first,int last)
{
	int i,j,pivot,temp;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<last)
				i++;
			while(a[j]>a[pivot])
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
		}
		temp=a[pivot];
		a[pivot]=a[i];
		a[j]=temp;
		quick(a,first,j-1);
		quick(a,j+1,last);
	}
	
}
